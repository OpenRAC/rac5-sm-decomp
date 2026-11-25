/* LEVEL_21:0x0EB5F8 -- placement copy of LEVEL_01_126948.c: writes the inverse of a packed rotation-plus-translation matrix: transposed 3x3 block and negated rotated translation. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
    float f_10;
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
    float f_24;
    float f_28;
    float f_2C;
} Mat;

void func_0EB5F8(Mat *a0, Mat *a1, int flag)
{
    float m00;
    float m01;
    float m02;
    float m10;
    float m11;
    float m12;
    float m20;
    float m21;
    float m22;
    float t0;
    float t1;
    float t2;

    m00 = a1->f_00;
    m01 = a1->f_04;
    m02 = a1->f_08;
    m10 = a1->f_0C;
    m11 = a1->f_10;
    m12 = a1->f_14;
    m20 = a1->f_18;
    m21 = a1->f_1C;
    m22 = a1->f_20;
    a0->f_00 = m00;
    a0->f_04 = m10;
    a0->f_08 = m20;
    a0->f_0C = m01;
    a0->f_10 = m11;
    a0->f_14 = m21;
    a0->f_18 = m02;
    a0->f_1C = m12;
    a0->f_20 = m22;
    t0 = a1->f_24;
    t1 = a1->f_28;
    t2 = a1->f_2C;
    a0->f_24 = (-m00 * t0 - m01 * t1) - m02 * t2;
    a0->f_28 = (-m10 * t0 - m11 * t1) - m12 * t2;
    a0->f_2C = (-m20 * t0 - m21 * t1) - m22 * t2;
}
