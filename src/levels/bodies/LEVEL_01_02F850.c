typedef struct {
    int a;
    int b;
    int c;
    float d;
} S;

extern S D_00232800;

void func_02F850(int a0, int a1)
{
    S *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_00232800;
            *(int *)&D_00232800 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
