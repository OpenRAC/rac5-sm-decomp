/* LEVEL_22:0x060A98 -- same shape as LEVEL_17:0x05D430, other module. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_18AE20;
extern float D_18AE30;

extern float func_000000(float f0);

void func_060A98(void *a0, int a1)
{
    float *e;

    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            e = &D_18AE30;
            D_18AE20.d = 1.0f;
            D_18AE20.a = 0;
            D_18AE20.c = 0;
            D_18AE20.b = 0;
            *e = func_000000(-0.5f);
        }
    }
}
