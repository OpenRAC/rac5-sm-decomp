typedef struct {
    int a;
    int b;
    int c;
    float d;
} G;

extern G D_17B1E0;

void func_17B1E0(int *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_17B1E0.a = 0;
            D_17B1E0.d = 1.0f;
            D_17B1E0.c = 0;
            D_17B1E0.b = 0;
        }
    }
}
