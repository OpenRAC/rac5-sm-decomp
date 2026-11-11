typedef struct {
    int a;
    int b;
    int c;
    float d;
} S;

extern S D_00362930;

void func_1A5EF0(int a0, int a1)
{
    S *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_00362930;
            *(int *)&D_00362930 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
