typedef struct {
    int a;
    int b;
    int c;
    float d;
} S;

extern S D_0033E5F0;

void func_120608(int a0, int a1)
{
    S *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_0033E5F0;
            *(int *)&D_0033E5F0 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
