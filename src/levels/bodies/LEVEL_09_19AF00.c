/* LEVEL_09:0x19AF00 -- initialises a global record when the caller asks for
   it (a1 == 0xFFFF) and passes a valid owner pointer, squares a global
   factor and publishes the value the erased helper returns. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0037EAC0;
extern float D_0037EAD0;
extern float D_0037EAD4;
extern float D_001F295C;
extern float func_000000(float, float);

void func_19AF00(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        float *dst = &D_0037EAD4;
        float f = D_001F295C;

        D_0037EAC0.f_00 = 0;
        D_0037EAC0.f_04 = 0;
        D_0037EAC0.f_08 = 0;
        D_0037EAC0.f_0C = 1.0f;
        D_0037EAD0 = f * f;
        *dst = func_000000(0.6f, 1.0f);
    }
}
