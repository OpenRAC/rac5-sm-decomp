/* LEVEL_15.REL:0x0AA4C8 -- resets the global timer object when a1 == 0xFFFF. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Timer;

extern Timer D_00243808;

void func_0AA4C8(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00243808.a = 0;
        D_00243808.d = 1.0f;
        D_00243808.c = 0;
        D_00243808.b = 0;
    }
}
