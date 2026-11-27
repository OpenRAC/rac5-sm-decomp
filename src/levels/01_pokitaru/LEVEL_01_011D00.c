/* LEVEL_01:0x011D00 -- resets two float globals and the default camera vector (0, 2, 7, 1). */
typedef struct Vec4 { float x; float y; float z; float w; } Vec4;
extern Vec4 D_0022F548;
extern float D_0022F510;
extern float D_0022F514;

void func_011D00(void)
{
    Vec4 *v = &D_0022F548;
    float zero = 0.0f;

    v->x = zero;
    v->y = 2.0f;
    v->z = 7.0f;
    v->w = 1.0f;
    D_0022F510 = zero;
    D_0022F514 = zero;
}
