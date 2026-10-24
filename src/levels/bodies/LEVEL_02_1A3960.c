typedef struct {
    int a;
    int b;
    int c;
    float d;
} S;

extern S D_003AEC20;

void func_1A3960(int a0, int a1)
{
    S *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_003AEC20;
            *(int *)&D_003AEC20 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
