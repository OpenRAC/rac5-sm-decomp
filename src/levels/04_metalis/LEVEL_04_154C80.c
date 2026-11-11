typedef struct {
    int a;
    int b;
    int c;
    float d;
} S;

extern S D_003AC238;

void func_154C80(int a0, int a1)
{
    S *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_003AC238;
            *(int *)&D_003AC238 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
