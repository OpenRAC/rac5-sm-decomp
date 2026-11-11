typedef struct {
    int a;
    int b;
    int c;
    float d;
} S;

extern S D_001D3288;

void func_02F268(int a0, int a1)
{
    S *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_001D3288;
            *(int *)&D_001D3288 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
