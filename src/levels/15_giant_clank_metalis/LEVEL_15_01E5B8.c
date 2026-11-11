/* LEVEL_15.REL:0x01E5B8 -- resets the global timer object when a1 == 0xFFFF. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Timer;

extern Timer D_00177DF8;

void func_01E5B8(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00177DF8.a = 0;
        D_00177DF8.d = 1.0f;
        D_00177DF8.c = 0;
        D_00177DF8.b = 0;
    }
}
