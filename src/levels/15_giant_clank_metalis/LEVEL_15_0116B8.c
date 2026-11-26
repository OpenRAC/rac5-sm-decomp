/* LEVEL_15:0x0116B8 -- placement copy of LEVEL_01_011D00.c: resets two float globals and the default camera vector (0, 2, 7, 1). */
typedef struct Vec4 { float x; float y; float z; float w; } Vec4;
extern Vec4 D_001776C8;
extern float D_00177690;
extern float D_00177694;

void func_0116B8(void)
{
    Vec4 *v = &D_001776C8;
    float zero = 0.0f;

    v->x = zero;
    v->y = 2.0f;
    v->z = 7.0f;
    v->w = 1.0f;
    D_00177690 = zero;
    D_00177694 = zero;
}
