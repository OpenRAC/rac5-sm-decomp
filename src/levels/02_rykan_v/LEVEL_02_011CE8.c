/* LEVEL_02:0x011CE8 -- placement copy of LEVEL_01_011D00.c: resets two float globals and the default camera vector (0, 2, 7, 1). */
typedef struct Vec4 { float x; float y; float z; float w; } Vec4;
extern Vec4 D_00246A48;
extern float D_00246A10;
extern float D_00246A14;

void func_011CE8(void)
{
    Vec4 *v = &D_00246A48;
    float zero = 0.0f;

    v->x = zero;
    v->y = 2.0f;
    v->z = 7.0f;
    v->w = 1.0f;
    D_00246A10 = zero;
    D_00246A14 = zero;
}
