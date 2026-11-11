typedef struct {
    int a;
    int b;
    int c;
    float d;
} S;

extern S D_0019F018;

void func_0BAE38(int a0, int a1)
{
    S *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_0019F018;
            *(int *)&D_0019F018 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
