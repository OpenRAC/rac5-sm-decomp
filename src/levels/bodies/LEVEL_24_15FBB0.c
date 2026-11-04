typedef struct {
    int a;
    int b;
    int c;
    float d;
} Timer;

extern Timer D_0035FF38;
extern float D_0035FF48;
extern float func_000000(float x);

void func_15FBB0(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *q = &D_0035FF48;

            D_0035FF38.d = 1.0f;
            D_0035FF38.a = 0;
            D_0035FF38.c = 0;
            D_0035FF38.b = 0;
            *q = func_000000(-0.6666667f);
        }
    }
}
