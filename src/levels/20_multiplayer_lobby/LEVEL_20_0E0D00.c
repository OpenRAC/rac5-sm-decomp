typedef struct {
    int a;
    int b;
    int c;
    float d;
} S;

extern S D_001C30A0;

void func_0E0D00(int a0, int a1)
{
    S *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_001C30A0;
            *(int *)&D_001C30A0 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
