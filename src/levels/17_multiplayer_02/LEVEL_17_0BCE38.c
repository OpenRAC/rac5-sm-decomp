/* LEVEL_17:0x0BCE38 -- resets a global record when the argument is the
   sentinel 0xFFFF; the last float is a separate global. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_26B480;
extern float D_26B490;
extern float D_1A4144;

void func_0BCE38(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_26B480.d = 1.0f;
            D_26B480.a = 0;
            D_26B490 = D_1A4144;
            D_26B480.c = 0;
            D_26B480.b = 0;
        }
    }
}
