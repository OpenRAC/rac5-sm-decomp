typedef struct {
    int a;
    int b;
    int c;
    float d;
} G;

extern G D_268EE0;

void func_268EE0(int *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_268EE0.a = 0;
            D_268EE0.d = 1.0f;
            D_268EE0.c = 0;
            D_268EE0.b = 0;
        }
    }
}
