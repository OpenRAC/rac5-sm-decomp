typedef struct {
    int a;
    int b;
    int c;
    float d;
} G;

extern G D_2436D8;

void func_2436D8(int *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_2436D8.a = 0;
            D_2436D8.d = 1.0f;
            D_2436D8.c = 0;
            D_2436D8.b = 0;
        }
    }
}
