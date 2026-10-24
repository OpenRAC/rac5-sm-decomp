typedef struct {
    int a;
    int b;
    int c;
    float d;
} S;

extern S D_003AC178;

void func_14FE88(int a0, int a1)
{
    S *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_003AC178;
            *(int *)&D_003AC178 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
