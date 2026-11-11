/* LEVEL_15.REL:0x021008 -- resets the global timer object when a1 == 0xFFFF. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Timer;

extern Timer D_00179090;

void func_021008(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00179090.a = 0;
        D_00179090.d = 1.0f;
        D_00179090.c = 0;
        D_00179090.b = 0;
    }
}
