/* LEVEL_02.REL:0x1568D8 -- resets the global timer and stores the call result. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Timer;

extern Timer D_003A8FC8;
extern float D_003A8FD8;
extern float func_000000(float x, float y);

void func_1568D8(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *q = &D_003A8FD8;

            D_003A8FC8.a = 0;
            D_003A8FC8.b = 0;
            D_003A8FC8.c = 0;
            D_003A8FC8.d = 1.0f;
            *q = func_000000(0.98f, 1.0f);
        }
    }
}
