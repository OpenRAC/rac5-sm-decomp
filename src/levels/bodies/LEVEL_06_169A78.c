typedef struct {
    int a;
    int b;
    int c;
    float d;
} Timer;

extern Timer D_00382BA8;
extern float D_00382BB8;
extern float func_000000(float x);

void func_169A78(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *q = &D_00382BB8;

            D_00382BA8.d = 1.0f;
            D_00382BA8.a = 0;
            D_00382BA8.c = 0;
            D_00382BA8.b = 0;
            *q = func_000000(-0.6666667f);
        }
    }
}
