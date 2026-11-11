typedef struct {
    int a;
    int b;
    int c;
    float d;
} S;

extern S D_00331728;

void func_10F2C0(int a0, int a1)
{
    S *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_00331728;
            *(int *)&D_00331728 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
