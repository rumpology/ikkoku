#include "../include/Matrix3.h"
// NOTE: Mark simple operations as inline (e.g. +=, -=)
// TODO: Ensure const-correctness in some functions
// TODO: Read into move constructors + assignment operators
// TODO: Add constexpr to simple functions

Matrix3 identity_matrix() { return Matrix3(1, 0, 0, 0, 1, 0, 0, 0, 1); }
Matrix3 operator+(const Matrix3 &A, const Matrix3 &B) {
  return Matrix3(A.array[0] + B.array[0], A.array[1] + B.array[1],
                 A.array[2] + B.array[2], A.array[3] + B.array[3],
                 A.array[4] + B.array[4], A.array[5] + B.array[5],
                 A.array[6] + B.array[6], A.array[7] + B.array[7],
                 A.array[8] + B.array[8]);
}
Matrix3 &operator+=(Matrix3 &A, const Matrix3 &B) {
  A.array[0] += B.array[0];
  A.array[1] += B.array[1];
  A.array[2] += B.array[2];
  A.array[3] += B.array[3];
  A.array[4] += B.array[4];
  A.array[5] += B.array[5];
  A.array[6] += B.array[6];
  A.array[7] += B.array[7];
  A.array[8] += B.array[8];
  return A;
}
Matrix3 operator-(const Matrix3 &A, const Matrix3 &B) {
  return Matrix3(A.array[0] - B.array[0], A.array[1] - B.array[1],
                 A.array[2] - B.array[2], A.array[3] - B.array[3],
                 A.array[4] - B.array[4], A.array[5] - B.array[5],
                 A.array[6] - B.array[6], A.array[7] - B.array[7],
                 A.array[8] - B.array[8]);
}
Matrix3 &operator-=(Matrix3 &A, const Matrix3 &B) {
  A.array[0] -= B.array[0];
  A.array[1] -= B.array[1];
  A.array[2] -= B.array[2];
  A.array[3] -= B.array[3];
  A.array[4] -= B.array[4];
  A.array[5] -= B.array[5];
  A.array[6] -= B.array[6];
  A.array[7] -= B.array[7];
  A.array[8] -= B.array[8];
  return A;
}
Matrix3 operator*(const Matrix3 &A, const float k) {
  return Matrix3(A.array[0] * k, A.array[1] * k, A.array[2] * k, A.array[3] * k,
                 A.array[4] * k, A.array[5] * k, A.array[6] * k, A.array[7] * k,
                 A.array[8] * k);
}
// TODO: Handle Division by Zero
Matrix3 operator/(const Matrix3 &A, const float k) {
  return Matrix3(A.array[0] / k, A.array[1] / k, A.array[2] / k, A.array[3] / k,
                 A.array[4] / k, A.array[5] / k, A.array[6] / k, A.array[7] / k,
                 A.array[8] / k);
}
Matrix3 &operator*=(Matrix3 &A, const float k) {
  A.array[0] *= k;
  A.array[1] *= k;
  A.array[2] *= k;
  A.array[3] *= k;
  A.array[4] *= k;
  A.array[5] *= k;
  A.array[6] *= k;
  A.array[7] *= k;
  A.array[8] *= k;
  return A;
}
Matrix3 &operator/=(Matrix3 &A, const float k) {
  A.array[0] /= k;
  A.array[1] /= k;
  A.array[2] /= k;
  A.array[3] /= k;
  A.array[4] /= k;
  A.array[5] /= k;
  A.array[6] /= k;
  A.array[7] /= k;
  A.array[8] /= k;
  return A;
}
Matrix3 operator*(const Matrix3 &A, const Matrix3 &B) {
  return Matrix3(A.array[0] * B.array[0] + A.array[1] * B.array[3] +
                     A.array[2] * B.array[6],
                 A.array[0] * B.array[1] + A.array[1] * B.array[4] +
                     A.array[2] * B.array[7],
                 A.array[0] * B.array[2] + A.array[1] * B.array[5] +
                     A.array[2] * B.array[8],
                 A.array[3] * B.array[0] + A.array[4] * B.array[3] +
                     A.array[5] * B.array[6],
                 A.array[3] * B.array[1] + A.array[4] * B.array[4] +
                     A.array[5] * B.array[7],
                 A.array[3] * B.array[2] + A.array[4] * B.array[5] +
                     A.array[5] * B.array[8],
                 A.array[6] * B.array[0] + A.array[7] * B.array[3] +
                     A.array[8] * B.array[6],
                 A.array[6] * B.array[1] + A.array[7] * B.array[4] +
                     A.array[8] * B.array[7],
                 A.array[6] * B.array[2] + A.array[7] * B.array[5] +
                     A.array[8] * B.array[8]);
}
// NOTE: Can I reduce overhead with pointers or iterators?
Matrix3 &operator*=(Matrix3 &A, const Matrix3 &B) {

  float m11 = A.array[0], m12 = A.array[1], m13 = A.array[2], m21 = A.array[3],
        m22 = A.array[4], m23 = A.array[5], m31 = A.array[6], m32 = A.array[7],
        m33 = A.array[8];

  A.array[0] = m11 * B.array[0] + m12 * B.array[3] + m13 * B.array[6];
  A.array[1] = m11 * B.array[1] + m12 * B.array[4] + m13 * B.array[7];
  A.array[2] = m11 * B.array[2] + m12 * B.array[5] + m13 * B.array[8];
  A.array[3] = m21 * B.array[0] + m22 * B.array[3] + m23 * B.array[6];
  A.array[4] = m21 * B.array[1] + m22 * B.array[4] + m23 * B.array[7];
  A.array[5] = m21 * B.array[2] + m22 * B.array[5] + m23 * B.array[8];
  A.array[6] = m31 * B.array[0] + m32 * B.array[3] + m33 * B.array[6];
  A.array[7] = m31 * B.array[1] + m32 * B.array[4] + m33 * B.array[7];
  A.array[8] = m31 * B.array[2] + m32 * B.array[5] + m33 * B.array[8];
  return A;
}
Vec3 operator*(const Matrix3 &A, const Vec3 &vec) {
  return Vec3(A.array[0] * vec.x + A.array[1] * vec.y + A.array[2] * vec.z,
              A.array[3] * vec.x + A.array[4] * vec.y + A.array[5] * vec.z,
              A.array[6] * vec.x + A.array[7] * vec.y + A.array[8] * vec.z);
}
void multiply_by_matrix(Vec3 &vec, const Matrix3 &matrix) {
  float x = vec.x, y = vec.y, z = vec.z;
  vec.x = matrix.array[0] * x + matrix.array[1] * y + matrix.array[2] * z;
  vec.y = matrix.array[3] * x + matrix.array[4] * y + matrix.array[5] * z;
  vec.z = matrix.array[6] * x + matrix.array[7] * y + matrix.array[8] * z;
}
// NOTE: Consider using std::swap
void transpose(Matrix3 &matrix) {
  float array1 = matrix.array[1];
  matrix.array[1] = matrix.array[3];
  matrix.array[3] = array1;
  float array2 = matrix.array[2];
  matrix.array[2] = matrix.array[6];
  matrix.array[6] = array2;
  float array5 = matrix.array[5];
  matrix.array[5] = matrix.array[7];
  matrix.array[7] = array5;
}
Matrix3 transpose_copy(const Matrix3 &matrix) {
  return Matrix3(matrix.array[0], matrix.array[3], matrix.array[6],
                 matrix.array[1], matrix.array[4], matrix.array[7],
                 matrix.array[2], matrix.array[5], matrix.array[8]);
}
// TODO: LU Decomposition implementation
float determinant(const Matrix3 &matrix) {
  return matrix.array[0] * (matrix.array[4] + matrix.array[8] -
                            matrix.array[7] * matrix.array[5]) -
         matrix.array[1] * (matrix.array[3] * matrix.array[8] -
                            matrix.array[6] * matrix.array[5]) +
         matrix.array[2] * (matrix.array[3] * matrix.array[7] -
                            matrix.array[6] * matrix.array[4]);
}
Matrix3 cofactor_matrix(const Matrix3 &matrix) {
  return Matrix3(
      matrix.array[4] * matrix.array[8] - matrix.array[7] * matrix.array[5],
      -1 * matrix.array[3] * matrix.array[8] +
          matrix.array[6] * matrix.array[5],
      matrix.array[3] * matrix.array[7] - matrix.array[6] * matrix.array[4],
      -1 * matrix.array[1] * matrix.array[8] +
          matrix.array[7] * matrix.array[2],
      matrix.array[0] * matrix.array[8] - matrix.array[6] * matrix.array[2],
      -1 * matrix.array[0] * matrix.array[7] +
          matrix.array[6] * matrix.array[1],
      matrix.array[1] * matrix.array[5] - matrix.array[4] * matrix.array[2],
      -1 * matrix.array[0] * matrix.array[5] +
          matrix.array[3] * matrix.array[2],
      matrix.array[0] * matrix.array[4] - matrix.array[3] * matrix.array[1]);
}
Matrix3 adjugate_matrix(const Matrix3 &matrix) {
  return transpose_copy(cofactor_matrix(matrix));
}
// TODO: Look into caching and approximation techniques
// WARNING: Has to account for division by 0
Matrix3 inverse(const Matrix3 &matrix) {
  return adjugate_matrix(matrix) / determinant(matrix);
}
