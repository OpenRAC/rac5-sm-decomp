/* LEVEL_07:0x1E80A0 -- placement copy of LEVEL_01_1D98E8.c: randomizes a particle's angle, color and kind. */
typedef struct P {
    int f0;
    float f4;
    int f8;
    int fC;
    float f10;
    int f14;
} P;
extern int rand(void);
extern int D_0021E0FC;
extern int D_0021E100;

void func_1E80A0(P *p, int flag)
{
    int c;
    float a, b;
    a = 6.2831855f;
    b = -3.1415927f;
    p->f4 = (float)rand() * 4.656612873077393e-10f * a + b;
    if (rand() >> 30)
        c = D_0021E0FC;
    else
        c = D_0021E100;
    p->fC = c;
    p->f10 = 0.45f;
    p->f14 = 0xFFFFFF;
    p->f8 = 0;
    if (flag)
        p->f0 = rand() % 6;
    else
        p->f0 = 6;
}
