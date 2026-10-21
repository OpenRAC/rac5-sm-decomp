typedef struct {
    int a;
    int b;
    int c;
    float d;
} G;

extern G D_248D58;

void func_248D58(int *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_248D58.a = 0;
            D_248D58.d = 1.0f;
            D_248D58.c = 0;
            D_248D58.b = 0;
        }
    }
}
