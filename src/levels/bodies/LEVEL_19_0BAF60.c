typedef struct {
    int a;
    int b;
    int c;
    float d;
} S;

extern S D_0027A1B8;

void func_0BAF60(int a0, int a1)
{
    S *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_0027A1B8;
            *(int *)&D_0027A1B8 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
