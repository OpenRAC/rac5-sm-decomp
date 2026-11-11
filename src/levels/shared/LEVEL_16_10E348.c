/* LEVEL_16.REL:0x10E348 -- resets the global timer object when a1 == 0xFFFF. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Timer;

extern Timer D_0029F880;

void func_10E348(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0029F880.a = 0;
        D_0029F880.d = 1.0f;
        D_0029F880.c = 0;
        D_0029F880.b = 0;
    }
}
