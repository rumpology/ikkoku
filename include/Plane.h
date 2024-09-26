#pragma once
#include "Vec3.h"

struct Plane {
  const unsigned char pixel_size;
  const unsigned char pixel_half_length;
  const unsigned int length;
  const unsigned int width;
  const unsigned long long grid_size;
  Vec3 *grid;
  const unsigned short rotation_x;
  const unsigned short rotation_y;
  const unsigned short rotation_z;
  Vec3 normal;
  Vec3 u; // along length
  Vec3 v; // along width (height)
  Plane(unsigned char pixel_size, unsigned int length, unsigned int width,
        unsigned short rotation_x, unsigned short rotation_y,
        unsigned short rotation_z);
};
void rotate_on_x(Vec3 &normal, const unsigned short &rotation_x);
void rotate_on_y(Vec3 &normal, const unsigned short &rotation_y);
void rotate_on_z(Vec3 &normal, const unsigned short &rotation_z);
void throw_rays(Vec3 *&grid, const unsigned int &length,
                const unsigned int &widht, const Vec3 &normal, const Vec3 &u,
                const Vec3 &v, const unsigned char &pixel_size);
unsigned long long get_number_pixels(const Plane &plane);

#ifdef DEBUG
#include <cstdio>
void print(const Plane &plane);
#endif
