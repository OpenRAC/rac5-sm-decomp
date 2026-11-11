typedef struct {
    int a;
    int b;
    int c;
    float d;
} S;

extern S D_0037D928;

void func_142858(int a0, int a1)
{
    S *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_0037D928;
            *(int *)&D_0037D928 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
