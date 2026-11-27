/* LEVEL_20:0x011710 -- placement copy of LEVEL_01_011D00.c: resets two float globals and the default camera vector (0, 2, 7, 1). */
typedef struct Vec4 { float x; float y; float z; float w; } Vec4;
extern Vec4 D_00135BC8;
extern float D_00135B90;
extern float D_00135B94;

void func_011710(void)
{
    Vec4 *v = &D_00135BC8;
    float zero = 0.0f;

    v->x = zero;
    v->y = 2.0f;
    v->z = 7.0f;
    v->w = 1.0f;
    D_00135B90 = zero;
    D_00135B94 = zero;
}
