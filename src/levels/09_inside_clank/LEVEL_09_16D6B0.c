typedef struct {
    int a;
    int b;
    int c;
    float d;
} Timer;

extern Timer D_0037D5C8;
extern float D_0037D5D8;
extern float expf(float x);

void func_16D6B0(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *q = &D_0037D5D8;

            D_0037D5C8.d = 1.0f;
            D_0037D5C8.a = 0;
            D_0037D5C8.c = 0;
            D_0037D5C8.b = 0;
            *q = expf(-0.6666667f);
        }
    }
}
