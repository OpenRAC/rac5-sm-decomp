/* LEVEL_15.REL:0x029038 -- resets the global timer object when a1 == 0xFFFF. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Timer;

extern Timer D_0017B1C0;

void func_029038(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0017B1C0.a = 0;
        D_0017B1C0.d = 1.0f;
        D_0017B1C0.c = 0;
        D_0017B1C0.b = 0;
    }
}
