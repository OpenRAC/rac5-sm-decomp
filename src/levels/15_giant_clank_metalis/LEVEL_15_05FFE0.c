typedef struct {
    int a;
    int b;
    int c;
    float d;
} G;

extern G D_182698;

void func_182698(int *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_182698.a = 0;
            D_182698.d = 1.0f;
            D_182698.c = 0;
            D_182698.b = 0;
        }
    }
}
