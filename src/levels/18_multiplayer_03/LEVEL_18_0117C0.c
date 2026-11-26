/* LEVEL_18:0x0117C0 -- placement copy of LEVEL_01_011D00.c: resets two float globals and the default camera vector (0, 2, 7, 1). */
typedef struct Vec4 { float x; float y; float z; float w; } Vec4;
extern Vec4 D_001DE5C8;
extern float D_001DE590;
extern float D_001DE594;

void func_0117C0(void)
{
    Vec4 *v = &D_001DE5C8;
    float zero = 0.0f;

    v->x = zero;
    v->y = 2.0f;
    v->z = 7.0f;
    v->w = 1.0f;
    D_001DE590 = zero;
    D_001DE594 = zero;
}
