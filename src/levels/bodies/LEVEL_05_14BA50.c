/* LEVEL_05:0x14BA50 -- initialises the global record D_0037D968 and stores
   the float returned by the erased routine in D_0037D978. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0037D968;
extern float D_0037D978;
extern float func_000000(float a, float b);

void func_14BA50(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *out = &D_0037D978;
            D_0037D968.f_00 = 0;
            D_0037D968.f_04 = 0;
            D_0037D968.f_08 = 0;
            D_0037D968.f_0C = 1.0f;
            *out = func_000000(0.98f, 1.0f);
        }
    }
}
