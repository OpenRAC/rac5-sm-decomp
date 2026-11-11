typedef struct {
    int a;
    int b;
    int c;
    float d;
} S;

extern S D_001B7910;

void func_01FD78(int a0, int a1)
{
    S *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_001B7910;
            *(int *)&D_001B7910 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
