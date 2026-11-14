/* LEVEL_01:0x126838 -- transposes the nine live floats of a 4-stride matrix into a packed 3x3 block. */
typedef struct {
    float f00, f01, f02, p03;
    float f10, f11, f12, p13;
    float f20, f21, f22;
} Src;

typedef struct {
    float f_00, f_04, f_08, f_0C, f_10, f_14, f_18, f_1C, f_20;
} Nine;

void func_126838(Nine *a0, Src *a1)
{
    float s00 = a1->f00;
    float s01 = a1->f01;
    float s02 = a1->f02;
    float s10 = a1->f10;
    float s11 = a1->f11;
    float s12 = a1->f12;
    float s20 = a1->f20;
    float s21 = a1->f21;
    float s22 = a1->f22;

    a0->f_00 = s00;
    a0->f_04 = s10;
    a0->f_08 = s20;
    a0->f_0C = s01;
    a0->f_10 = s11;
    a0->f_14 = s21;
    a0->f_18 = s02;
    a0->f_1C = s12;
    a0->f_20 = s22;
}
