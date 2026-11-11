/* LEVEL_15.REL:0x040658 -- resets the global timer object when a1 == 0xFFFF. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Timer;

extern Timer D_00180D50;

void func_040658(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00180D50.a = 0;
        D_00180D50.d = 1.0f;
        D_00180D50.c = 0;
        D_00180D50.b = 0;
    }
}
