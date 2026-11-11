typedef struct {
    int a;
    int b;
    int c;
    float d;
} S;

extern S D_001FFC80;

void func_02D1D8(int a0, int a1)
{
    S *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_001FFC80;
            *(int *)&D_001FFC80 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
