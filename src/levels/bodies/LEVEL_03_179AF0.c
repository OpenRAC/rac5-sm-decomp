/* LEVEL_03.REL:0x179AF0 -- resets the global timer and stores the call result. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Timer;

extern Timer D_003B0D98;
extern float D_003B0DA8;
extern float func_000000(float x);

void func_179AF0(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *q = &D_003B0DA8;

            D_003B0D98.d = 1.0f;
            D_003B0D98.a = 0;
            D_003B0D98.c = 0;
            D_003B0D98.b = 0;
            *q = func_000000(-0.6666667f);
        }
    }
}
