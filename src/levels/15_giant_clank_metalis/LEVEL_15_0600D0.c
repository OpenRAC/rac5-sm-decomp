/* LEVEL_15.REL:0x0600D0 -- resets the global timer object when a1 == 0xFFFF. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Timer;

extern Timer D_001826B8;

void func_0600D0(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_001826B8.a = 0;
        D_001826B8.d = 1.0f;
        D_001826B8.c = 0;
        D_001826B8.b = 0;
    }
}
