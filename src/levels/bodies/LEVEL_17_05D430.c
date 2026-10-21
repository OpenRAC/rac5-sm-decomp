/* LEVEL_17:0x05D430 -- variant c: the second global is taken by address. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_1DCBF0;
extern float D_1DCC00;

extern float func_000000(float f0);

void func_05D430(void *a0, int a1)
{
    float *e;

    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            e = &D_1DCC00;
            D_1DCBF0.d = 1.0f;
            D_1DCBF0.a = 0;
            D_1DCBF0.c = 0;
            D_1DCBF0.b = 0;
            *e = func_000000(-0.5f);
        }
    }
}
