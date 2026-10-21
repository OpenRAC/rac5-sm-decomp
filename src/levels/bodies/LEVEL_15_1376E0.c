/* LEVEL_15.REL:0x1376E0 -- resets the global timer and stores the call result. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Timer;

extern Timer D_002F4F70;
extern float D_002F4F80;
extern float func_000000(float x);

void func_1376E0(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *q = &D_002F4F80;

            D_002F4F70.d = 1.0f;
            D_002F4F70.a = 0;
            D_002F4F70.c = 0;
            D_002F4F70.b = 0;
            *q = func_000000(-0.33333334f);
        }
    }
}
