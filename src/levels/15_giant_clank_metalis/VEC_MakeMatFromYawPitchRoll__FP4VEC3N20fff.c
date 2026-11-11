/* LEVEL_15:0x0EB120 -- builds a rotation from three angles (the third about one axis, the first two with the shared helper), multiplies the two matrices and writes the first three rows of the product to the three output vectors. */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

extern void func_0E9D20(Vec3 *m, float angle);
extern void func_0EB068(Vec3 *matrix, float first, float second);
extern void func_0E9E40(Vec3 *out, Vec3 *a, Vec3 *b);

void VEC_MakeMatFromYawPitchRoll__FP4VEC3N20fff(Vec3 *a, Vec3 *b, Vec3 *c, float x, float y, float z)
{
    Vec3 m1[4];
    Vec3 m2[4];
    Vec3 m3[4];

    func_0E9D20(m1, z);
    func_0EB068(m2, x, y);
    func_0E9E40(m3, m1, m2);
    *a = m3[0];
    *b = m3[1];
    *c = m3[2];
}
