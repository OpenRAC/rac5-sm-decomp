/* LEVEL_02.REL:0x1DBFA0 -- resets the global timer object when a1 == 0xFFFF. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Timer;

extern Timer D_003B06F8;

void func_1DBFA0(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_003B06F8.a = 0;
        D_003B06F8.d = 1.0f;
        D_003B06F8.c = 0;
        D_003B06F8.b = 0;
    }
}
