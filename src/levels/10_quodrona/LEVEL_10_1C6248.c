typedef struct {
    int a;
    int b;
    int c;
    float d;
} S;

extern S D_003A1DE0;

void func_1C6248(int a0, int a1)
{
    S *p;
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            p = &D_003A1DE0;
            *(int *)&D_003A1DE0 = 0;
            p->d = 1.0f;
            p->c = 0;
            p->b = 0;
        }
    }
}
