/* LEVEL_15.REL:0x0A6648 -- resets the global timer object when a1 == 0xFFFF. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Timer;

extern Timer D_00242E20;

void func_0A6648(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00242E20.a = 0;
        D_00242E20.d = 1.0f;
        D_00242E20.c = 0;
        D_00242E20.b = 0;
    }
}
