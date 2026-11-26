/* LEVEL_08:0x011D68 -- placement copy of LEVEL_01_011D00.c: resets two float globals and the default camera vector (0, 2, 7, 1). */
typedef struct Vec4 { float x; float y; float z; float w; } Vec4;
extern Vec4 D_0027E7C8;
extern float D_0027E790;
extern float D_0027E794;

void func_011D68(void)
{
    Vec4 *v = &D_0027E7C8;
    float zero = 0.0f;

    v->x = zero;
    v->y = 2.0f;
    v->z = 7.0f;
    v->w = 1.0f;
    D_0027E790 = zero;
    D_0027E794 = zero;
}
