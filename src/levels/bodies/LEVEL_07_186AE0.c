typedef struct {
    int a;
    int b;
    int c;
    float d;
} Timer;

extern Timer D_003AB868;
extern float D_003AB878;
extern float func_000000(float x);

void func_186AE0(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *q = &D_003AB878;

            D_003AB868.d = 1.0f;
            D_003AB868.a = 0;
            D_003AB868.c = 0;
            D_003AB868.b = 0;
            *q = func_000000(-0.6666667f);
        }
    }
}
