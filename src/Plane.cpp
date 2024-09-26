#include "../include/Plane.h"
#include "../include/LookupCosine.h"
#include "../include/LookupSine.h"
#include "../include/Matrix3.h"
#ifdef DEBUG
void print(const Plane &plane) {
  printf("Plane(length: %u, width: %u)\n"
         "Rotation(Rx: %u deg, "
         "Ry: %u deg, "
         "Rz: %u deg)\n"
         "Normal(%.2f, %.2f, %.2f)\n"
         "u(%.2f, %.2f, %.2f)\n"
         "v(%.2f, %.2f, %.2f)\n",
         plane.width, plane.length, plane.rotation_x, plane.rotation_y,
         plane.rotation_z, plane.normal.x, plane.normal.y, plane.normal.z,
         plane.u.x, plane.u.y, plane.u.z, plane.v.x, plane.v.y, plane.v.z);
}
#endif

Plane::Plane(unsigned char pixel_size, unsigned int length, unsigned int width,
             unsigned short rotation_x, unsigned short rotation_y,
             unsigned short rotation_z)
    : pixel_size(pixel_size), pixel_half_length(pixel_size / 2), length(length),
      width(width), grid_size(length * width), grid(new Vec3[grid_size]),
      rotation_x(rotation_x), rotation_y(rotation_y), rotation_z(rotation_z),
      normal(1, 0, 0) {

  // TODO: Create rotation transformation matrix for all applicable (x||y||z)
  if (rotation_x > 0)
    rotate_on_x(normal, rotation_x);
  if (rotation_y > 0)
    rotate_on_y(normal, rotation_y);
  if (rotation_z > 0)
    rotate_on_z(normal, rotation_z);

  // TODO: Cross product plane normal by global_z then result by normal

  u = cross_product(Vec3(0, 0, 1), normal);
  v = cross_product(normal, u);
  throw_rays(grid, length, width, normal, u, v, pixel_size);
}

void throw_rays(Vec3 *&grid, const unsigned int &length,
                const unsigned int &widht, const Vec3 &normal, const Vec3 &u,
                const Vec3 &v, const unsigned char &pixel_size) {
  Vec3 direction = -1 * normal;

  grid[0].x = 1;
  grid[0].y = 1;
  grid[0].z = 3;
}

void rotate_on_x(Vec3 &normal, const unsigned short &rotation_x) {
  const Matrix3 transform(1, 0, 0, 0, lookup_cosine[rotation_x % 360],
                          -lookup_sine[rotation_x % 360], 0,
                          lookup_sine[rotation_x % 360],
                          lookup_cosine[rotation_x % 360]);
  multiply_by_matrix(normal, transform);
}
void rotate_on_y(Vec3 &normal, const unsigned short &rotation_y) {
  const Matrix3 transform(
      lookup_cosine[rotation_y % 360], 0, lookup_sine[rotation_y % 360], 0, 1,
      0, -lookup_sine[rotation_y % 360], 0, lookup_cosine[rotation_y % 360]);
  multiply_by_matrix(normal, transform);
}
void rotate_on_z(Vec3 &normal, const unsigned short &rotation_z) {
  const Matrix3 transform(lookup_cosine[rotation_z % 360],
                          -lookup_sine[rotation_z % 360], 0,
                          lookup_sine[rotation_z % 360],
                          lookup_cosine[rotation_z % 360], 0, 0, 0, 1);
  multiply_by_matrix(normal, transform);
}
unsigned long long get_number_pixels(const Plane &plane) {
  return plane.grid_size;
}
