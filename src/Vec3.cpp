#include "../include/Vec3.h"

// IMPLEMENTATIONS

Vec3 operator*(float t, const Vec3 &vec) {
  return Vec3(vec.x * t, vec.y * t, vec.z * t);
}
Vec3 operator*(const Vec3 &vec, float t) {
  return Vec3(vec.x * t, vec.y * t, vec.z * t);
}
Vec3 &operator*=(Vec3 &vec, float t) {
  vec.x *= t;
  vec.y *= t;
  vec.z *= t;
  return vec;
}
Vec3 operator/(const Vec3 &vec, float t) {
  return Vec3(vec.x / t, vec.y / t, vec.z / t);
}
Vec3 &operator/=(Vec3 &vec, float t) {
  vec.x /= t;
  vec.y /= t;
  vec.z /= t;
  return vec;
}
Vec3 operator+(const Vec3 &u, const Vec3 &v) {
  return Vec3(u.x + v.x, u.y + v.y, u.z + v.z);
}
Vec3 &operator+=(Vec3 &u, const Vec3 &v) {
  u.x += v.x;
  u.y += v.y;
  u.z += v.z;
  return u;
}
Vec3 operator-(const Vec3 &u, const Vec3 &v) {
  return Vec3(u.x - v.x, u.y - v.y, u.z - v.z);
}
Vec3 operator-(Vec3 &vec) { return vec * -1; }
Vec3 &operator-=(Vec3 &u, const Vec3 &v) {
  u.x -= v.x;
  u.y -= v.y;
  u.z -= v.z;
  return u;
}
float dot_product(const Vec3 &u, const Vec3 &v) {
  return u.x * v.x + u.y * v.y + u.z * v.z;
}
Vec3 cross_product(const Vec3 &u, const Vec3 &v) {
  return Vec3(u.y * v.z - u.z * v.y, u.z * v.x - u.x * v.z,
              u.x * v.y - u.y * v.x);
}

// Debug

#ifdef DEBUG
void print(const Vec3 &vec) {
  printf("Vec3(x: %f, y: %f, z: %f)\n", vec.x, vec.y, vec.z);
}
#endif
