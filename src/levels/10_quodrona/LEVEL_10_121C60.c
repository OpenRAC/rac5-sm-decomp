typedef struct {
    int a;
    int b;
    int c;
    float d;
} S;

extern S D_0035AC60;

void func_121C60(int a0, int a1)
{
    S *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_0035AC60;
            *(int *)&D_0035AC60 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
