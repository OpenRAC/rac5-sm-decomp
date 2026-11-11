typedef struct {
    int a;
    int b;
    int c;
    float d;
} S;

extern S D_002DD8D0;

void func_10BD18(int a0, int a1)
{
    S *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_002DD8D0;
            *(int *)&D_002DD8D0 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
