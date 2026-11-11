typedef struct {
    int a;
    int b;
    int c;
    float d;
} G;

extern G D_37D628;

void func_37D628(int *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_37D628.a = 0;
            D_37D628.d = 1.0f;
            D_37D628.c = 0;
            D_37D628.b = 0;
        }
    }
}
