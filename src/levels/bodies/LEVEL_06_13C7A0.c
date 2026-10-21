/* LEVEL_06.REL:0x13C7A0 -- resets the global timer and stores the call result. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Timer;

extern Timer D_0037E788;
extern float D_0037E798;
extern float func_000000(float x, float y);

void func_13C7A0(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *q = &D_0037E798;

            D_0037E788.a = 0;
            D_0037E788.b = 0;
            D_0037E788.c = 0;
            D_0037E788.d = 1.0f;
            *q = func_000000(0.98f, 1.0f);
        }
    }
}
