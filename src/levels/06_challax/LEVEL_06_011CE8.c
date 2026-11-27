/* LEVEL_06:0x011CE8 -- placement copy of LEVEL_01_011D00.c: resets two float globals and the default camera vector (0, 2, 7, 1). */
typedef struct Vec4 { float x; float y; float z; float w; } Vec4;
extern Vec4 D_0021C2C8;
extern float D_0021C290;
extern float D_0021C294;

void func_011CE8(void)
{
    Vec4 *v = &D_0021C2C8;
    float zero = 0.0f;

    v->x = zero;
    v->y = 2.0f;
    v->z = 7.0f;
    v->w = 1.0f;
    D_0021C290 = zero;
    D_0021C294 = zero;
}
