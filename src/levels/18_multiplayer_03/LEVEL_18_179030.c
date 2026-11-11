typedef struct {
    int a;
    int b;
    int c;
    float d;
} S;

extern S D_002E5A50;

void func_179030(int a0, int a1)
{
    S *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_002E5A50;
            *(int *)&D_002E5A50 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
