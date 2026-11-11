typedef struct {
    int a;
    int b;
    int c;
    float d;
} G;

extern G D_2E5D18;

void func_2E5D18(int *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_2E5D18.a = 0;
            D_2E5D18.d = 1.0f;
            D_2E5D18.c = 0;
            D_2E5D18.b = 0;
        }
    }
}
