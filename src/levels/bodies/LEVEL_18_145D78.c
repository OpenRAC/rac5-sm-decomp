/* LEVEL_18.REL:0x145D78 -- resets the global timer and stores the call result. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Timer;

extern Timer D_002E53A8;
extern float D_002E53B8;
extern float func_000000(float x, float y);

void func_145D78(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *q = &D_002E53B8;

            D_002E53A8.a = 0;
            D_002E53A8.b = 0;
            D_002E53A8.c = 0;
            D_002E53A8.d = 1.0f;
            *q = func_000000(0.98f, 1.0f);
        }
    }
}
