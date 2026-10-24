typedef struct {
    int a;
    int b;
    int c;
    float d;
} S;

extern S D_001E21B0;

void func_030F68(int a0, int a1)
{
    S *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_001E21B0;
            *(int *)&D_001E21B0 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
