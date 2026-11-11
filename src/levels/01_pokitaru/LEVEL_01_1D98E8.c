/* LEVEL_01:0x1D98E8 -- randomizes a particle's angle, color and kind. */
typedef struct P {
    int f0;
    float f4;
    int f8;
    int fC;
    float f10;
    int f14;
} P;
extern int rand(void);
extern int D_00209424;
extern int D_00209428;

void func_1D98E8(P *p, int flag)
{
    int c;
    float a, b;
    a = 6.2831855f;
    b = -3.1415927f;
    p->f4 = (float)rand() * 4.656612873077393e-10f * a + b;
    if (rand() >> 30)
        c = D_00209424;
    else
        c = D_00209428;
    p->fC = c;
    p->f10 = 0.45f;
    p->f14 = 0xFFFFFF;
    p->f8 = 0;
    if (flag)
        p->f0 = rand() % 6;
    else
        p->f0 = 6;
}
