typedef struct {
    int a;
    int b;
    int c;
    float d;
} S;

extern S D_0031E458;

void func_0FF958(int a0, int a1)
{
    S *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_0031E458;
            *(int *)&D_0031E458 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
