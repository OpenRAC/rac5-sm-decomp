/* LEVEL_15.REL:0x0925D8 -- resets the global timer object when a1 == 0xFFFF. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Timer;

extern Timer D_0023F998;

void func_0925D8(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0023F998.a = 0;
        D_0023F998.d = 1.0f;
        D_0023F998.c = 0;
        D_0023F998.b = 0;
    }
}
