typedef struct {
    int a;
    int b;
    int c;
    float d;
} G;

extern G D_3AB060;

void func_3AB060(int *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_3AB060.a = 0;
            D_3AB060.d = 1.0f;
            D_3AB060.c = 0;
            D_3AB060.b = 0;
        }
    }
}
