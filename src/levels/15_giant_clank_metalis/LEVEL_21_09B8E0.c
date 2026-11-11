typedef struct {
    int a;
    int b;
    int c;
    float d;
} G;

extern G D_240250;

void func_240250(int *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_240250.a = 0;
            D_240250.d = 1.0f;
            D_240250.c = 0;
            D_240250.b = 0;
        }
    }
}
