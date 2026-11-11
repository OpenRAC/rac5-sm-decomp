typedef struct {
    int a;
    int b;
    int c;
    float d;
} S;

extern S D_003B0588;

void func_1D7328(int a0, int a1)
{
    S *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_003B0588;
            *(int *)&D_003B0588 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
