typedef struct {
    int a;
    int b;
    int c;
    float d;
} S;

extern S D_003138A8;

void func_0B0F80(int a0, int a1)
{
    S *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_003138A8;
            *(int *)&D_003138A8 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
