/* LEVEL_15.REL:0x018120 -- resets the global timer object when a1 == 0xFFFF. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Timer;

extern Timer D_00177DD8;

void func_018120(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00177DD8.a = 0;
        D_00177DD8.d = 1.0f;
        D_00177DD8.c = 0;
        D_00177DD8.b = 0;
    }
}
