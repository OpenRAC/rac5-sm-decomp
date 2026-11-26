/* LEVEL_03:0x011D20 -- placement copy of LEVEL_01_011D00.c: resets two float globals and the default camera vector (0, 2, 7, 1). */
typedef struct Vec4 { float x; float y; float z; float w; } Vec4;
extern Vec4 D_0024A3C8;
extern float D_0024A390;
extern float D_0024A394;

void func_011D20(void)
{
    Vec4 *v = &D_0024A3C8;
    float zero = 0.0f;

    v->x = zero;
    v->y = 2.0f;
    v->z = 7.0f;
    v->w = 1.0f;
    D_0024A390 = zero;
    D_0024A394 = zero;
}
