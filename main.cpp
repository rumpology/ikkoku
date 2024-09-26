#include "include/Plane.h"
#include "include/Vec3.h"
#ifdef DEBUG
#include "include/Utilities.h"
#include <iostream>
#endif

// TODO: Object collection placement in array
// TODO: Sphere, cone, triangle, cube, etc. structs
// TODO: Collection of placed objects
// TODO: Use union and enums along an array of union struct for pooling
// TODO: Every ray pools through collection (discriminant calculation)

#define UNSIGNED_INT_MAX 4294967294;
#define ORIGIN Vec3(0.0f, 0.0f, 0.0f)
#define PIXEL_SIZE 2

int main() {

  // unsigned int length = UNSIGNED_INT_MAX;
  // unsigned int width = UNSIGNED_INT_MAX;
  unsigned int length = 50;
  unsigned int width = 50;
  Plane plane(PIXEL_SIZE, length, width, 0, 0, 0);
#ifdef DEBUG
  print(plane);
  std::cout << "pixels: " << get_number_pixels(plane) << std::endl;
  char buffer[20];
  Vec3 upmost = plane.v * plane.pixel_size * plane.width / 2 -
                plane.v * plane.pixel_half_length;
  Vec3 leftmost = plane.u * plane.pixel_size * plane.length / 2 * -1 +
                  plane.u * plane.pixel_half_length;
  Vec3 current;
  for (int i = 0; i < plane.length * plane.width; ++i) {
    current = leftmost + upmost - plane.normal;
    std::cout << "e_" << i << ": ";
    print(current);
    leftmost += (plane.u * plane.pixel_size);
    if (i > 0 && i % plane.length == 0) {
      leftmost -= plane.u * plane.pixel_size * plane.length;
      upmost -= plane.v * plane.pixel_size;
    }
  }
#endif
}
