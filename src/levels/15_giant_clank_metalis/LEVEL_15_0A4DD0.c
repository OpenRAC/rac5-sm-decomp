/* LEVEL_15.REL:0x0A4DD0 -- resets the global timer object when a1 == 0xFFFF. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Timer;

extern Timer D_00240C80;

void func_0A4DD0(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00240C80.a = 0;
        D_00240C80.d = 1.0f;
        D_00240C80.c = 0;
        D_00240C80.b = 0;
    }
}
