typedef struct {
    int a;
    int b;
    int c;
    float d;
} S;

extern S D_00398400;

void func_1B5F78(int a0, int a1)
{
    S *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_00398400;
            *(int *)&D_00398400 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
