/* LEVEL_02:0x12F6D8 -- rotates two vectors by the sine/cosine pair: the first result gets the difference, the second the sum. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
} Vec3;

void func_12F6D8(Vec3 *a0, Vec3 *a1, Vec3 *a2, Vec3 *a3, float s, float t)
{
    float c0 = a2->f_00;
    float c1 = a2->f_04;
    float c2 = a2->f_08;
    float d0 = a3->f_00;
    float d1 = a3->f_04;
    float d2 = a3->f_08;

    a0->f_00 = t * c0 - s * d0;
    a0->f_04 = t * c1 - s * d1;
    a0->f_08 = t * c2 - s * d2;
    a1->f_00 = s * c0 + t * d0;
    a1->f_04 = s * c1 + t * d1;
    a1->f_08 = s * c2 + t * d2;
}
