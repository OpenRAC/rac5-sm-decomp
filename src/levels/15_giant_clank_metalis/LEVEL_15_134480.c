/* LEVEL_15.REL:0x134480 -- resets the global timer object when a1 == 0xFFFF. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Timer;

extern Timer D_002F4F60;

void func_134480(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_002F4F60.a = 0;
        D_002F4F60.d = 1.0f;
        D_002F4F60.c = 0;
        D_002F4F60.b = 0;
    }
}
