/* LEVEL_23:0x189FC8 -- initialises a global record when the caller asks for
   it (a1 == 0xFFFF) and passes a valid owner pointer, squares a global
   factor and publishes the value the erased helper returns. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003652E8;
extern float D_003652F8;
extern float D_003652FC;
extern float D_001DC07C;
extern float func_000000(float, float);

void func_189FC8(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        float *dst = &D_003652FC;
        float f = D_001DC07C;

        D_003652E8.f_00 = 0;
        D_003652E8.f_04 = 0;
        D_003652E8.f_08 = 0;
        D_003652E8.f_0C = 1.0f;
        D_003652F8 = f * f;
        *dst = func_000000(0.6f, 1.0f);
    }
}
