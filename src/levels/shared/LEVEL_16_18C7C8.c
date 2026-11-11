/* LEVEL_16.REL:0x18C7C8 -- resets the global timer object when a1 == 0xFFFF. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Timer;

extern Timer D_002E5F08;

void func_18C7C8(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_002E5F08.a = 0;
        D_002E5F08.d = 1.0f;
        D_002E5F08.c = 0;
        D_002E5F08.b = 0;
    }
}
