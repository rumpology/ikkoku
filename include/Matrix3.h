#pragma once
#include "Vec3.h"
struct Matrix3 {
  float array[9];
  Matrix3(float m11, float m12, float m13, float m21, float m22, float m23,
          float m31, float m32, float m33)
      : array{m11, m12, m13, m21, m22, m23, m31, m32, m33} {}
  Matrix3()
      : array{
            0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
        } {}
  Matrix3(const Matrix3 &matrix)
      : array{matrix.array[0], matrix.array[1], matrix.array[2],
              matrix.array[3], matrix.array[4], matrix.array[5],
              matrix.array[6], matrix.array[7], matrix.array[8]} {}
};

Matrix3 identity_matrix();
Matrix3 operator+(const Matrix3 &A, const Matrix3 &B);
Matrix3 &operator+=(Matrix3 &A, const Matrix3 &B);
Matrix3 operator-(const Matrix3 &A, const Matrix3 &B);
Matrix3 &operator-=(Matrix3 &A, const Matrix3 &B);
Matrix3 operator*(const Matrix3 &A, const float k);
Matrix3 operator/(const Matrix3 &A, const float k);
Matrix3 &operator*=(Matrix3 &A, const float k);
Matrix3 &operator/=(Matrix3 &A, const float k);
Matrix3 operator*(const Matrix3 &A, const Matrix3 &B);
Matrix3 &operator*=(Matrix3 &A, const Matrix3 &B);
Vec3 operator*(const Matrix3 &A, const Vec3 &vec);
void multiply_by_matrix(Vec3 &vec, const Matrix3 &matrix);
void transpose(const Matrix3 &matrix);
Matrix3 transpose_copy(const Matrix3 &matrix);
float determinant(const Matrix3 &matrix);
Matrix3 cofactor_matrix(const Matrix3 &matrix);
Matrix3 adjugate_matrix(const Matrix3 &matrix);
Matrix3 inverse(const Matrix3 &matrix);
