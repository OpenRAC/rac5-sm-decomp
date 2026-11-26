/* LEVEL_17:0x011750 -- placement copy of LEVEL_01_011D00.c: resets two float globals and the default camera vector (0, 2, 7, 1). */
typedef struct Vec4 { float x; float y; float z; float w; } Vec4;
extern Vec4 D_001CF548;
extern float D_001CF510;
extern float D_001CF514;

void func_011750(void)
{
    Vec4 *v = &D_001CF548;
    float zero = 0.0f;

    v->x = zero;
    v->y = 2.0f;
    v->z = 7.0f;
    v->w = 1.0f;
    D_001CF510 = zero;
    D_001CF514 = zero;
}
