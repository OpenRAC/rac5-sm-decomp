typedef struct {
    int a;
    int b;
    int c;
    float d;
} G;

extern G D_3470D8;

void func_3470D8(int *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_3470D8.a = 0;
            D_3470D8.d = 1.0f;
            D_3470D8.c = 0;
            D_3470D8.b = 0;
        }
    }
}
