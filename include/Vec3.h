#pragma once
struct Vec3 {
  float x;
  float y;
  float z;
  Vec3() : x(0.0f), y(0.0f), z(0.0f) {}
  Vec3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
  Vec3(const Vec3 &vec) : x(vec.x), y(vec.y), z(vec.z) {}
};

// OPERATIONS

// Scalar
Vec3 operator*(float t, const Vec3 &vec);
Vec3 operator*(const Vec3 &vec, float t);
Vec3 &operator*=(Vec3 &vec, float t);
Vec3 operator/(const Vec3 &vec, float t);
Vec3 &operator/=(Vec3 &vec, float t);

// Vector
Vec3 operator+(const Vec3 &u, const Vec3 &v);
Vec3 &operator+=(Vec3 &u, const Vec3 &v);
Vec3 operator-(const Vec3 &u, const Vec3 &v);
Vec3 operator-(Vec3 &vec);
Vec3 &operator-=(Vec3 &u, const Vec3 &v);
float dot_product(const Vec3 &u, const Vec3 &v);
Vec3 cross_product(const Vec3 &u, const Vec3 &v);

// Debug

#ifdef DEBUG
#include <cstdio>
void print(const Vec3 &vec);
#endif
