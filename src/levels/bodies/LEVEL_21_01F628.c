typedef struct {
    int a;
    int b;
    int c;
    float d;
} G;

extern G D_177E08;

void func_177E08(int *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_177E08.a = 0;
            D_177E08.d = 1.0f;
            D_177E08.c = 0;
            D_177E08.b = 0;
        }
    }
}
