typedef struct {
    int a;
    int b;
    int c;
    float d;
} S;

extern S D_0024A568;

void func_013580(int a0, int a1)
{
    S *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_0024A568;
            *(int *)&D_0024A568 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
