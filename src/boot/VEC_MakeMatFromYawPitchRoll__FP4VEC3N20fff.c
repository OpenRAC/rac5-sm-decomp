/* 0x01E77740 -- Build rotation vectors from yaw, pitch and roll. Ported from OpenRAC/rac-sac-decomp src/levels/shared/VEC_MakeMatFromYawPitchRoll__FP4VEC3N20fff.c (VEC_MakeMatFromYawPitchRoll__FP4VEC3N20fff). */

typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

extern void VEC_ConstructRotZMat3__FP7MATRIX3f(Vec3 *m, float angle);
extern void VEC_MakeMat3FromYawPitch__FP7MATRIX3ff(Vec3 *matrix, float first, float second);
extern void VEC_MultiplyMatrix3__FP7MATRIX3PC7MATRIX3T1(Vec3 *out, Vec3 *a, Vec3 *b);

void VEC_MakeMatFromYawPitchRoll__FP4VEC3N20fff(Vec3 *a, Vec3 *b, Vec3 *c, float x, float y, float z)
{
    Vec3 m1[4];
    Vec3 m2[4];
    Vec3 m3[4];

    VEC_ConstructRotZMat3__FP7MATRIX3f(m1, z);
    VEC_MakeMat3FromYawPitch__FP7MATRIX3ff(m2, x, y);
    VEC_MultiplyMatrix3__FP7MATRIX3PC7MATRIX3T1(m3, m1, m2);
    *a = m3[0];
    *b = m3[1];
    *c = m3[2];
}
