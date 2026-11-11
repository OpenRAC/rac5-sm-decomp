typedef struct {
    int a;
    int b;
    int c;
    float d;
} S;

extern S D_0030FC00;

void func_0B1C10(int a0, int a1)
{
    S *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_0030FC00;
            *(int *)&D_0030FC00 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
