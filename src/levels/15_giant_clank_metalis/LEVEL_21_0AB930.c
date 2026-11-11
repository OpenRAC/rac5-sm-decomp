typedef struct {
    int a;
    int b;
    int c;
    float d;
} G;

extern G D_243818;

void func_243818(int *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_243818.a = 0;
            D_243818.d = 1.0f;
            D_243818.c = 0;
            D_243818.b = 0;
        }
    }
}
