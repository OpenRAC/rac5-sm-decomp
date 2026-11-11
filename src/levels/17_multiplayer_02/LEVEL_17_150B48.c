/* LEVEL_17:0x150B48 -- switches an actor between modes and sets up transition effects. */
typedef struct P { char pad[0x14]; float a, b, c, d; } P;
typedef struct S { int w0; char pad[0x48]; char *w4C; } S;
typedef struct O {
    char pad0[0x45];
    unsigned char b45;
    char pad46[0x12];
    S *s58;
    char pad5C[8];
    unsigned int w64;
    char pad68[8];
    int w70;
    unsigned short h74;
} O;
extern P *D_001B11CC;
extern void func_073DB0(char *);
extern void func_073C48(O *, P *, char **, int, int, int, int, int, float, float, float, float);
extern void func_1505B8(O *);
void func_150B48(O *o, unsigned char old, unsigned char nw)
{
    S *s;
    if (old == nw)
        return;
    s = o->s58;
    if (old == 2) {
        if (nw != 3)
            s->w0 = 0;
        if (s->w4C) {
            func_073DB0(s->w4C);
            s->w4C = 0;
        }
    }
    o->w70 = 0;
    switch (nw) {
    case 0:
        break;
    case 1:
        o->h74 = nw;
        break;
    case 2:
        o->w64 |= 0x1000000;
        o->h74 = nw;
        if (s->w4C == 0 && D_001B11CC)
            func_073C48(o, D_001B11CC, &s->w4C, 0, 0, 0, 0, 1, D_001B11CC->a, D_001B11CC->b, D_001B11CC->c, D_001B11CC->d);
        break;
    case 3:
        func_1505B8(o);
        break;
    }
    o->b45 = nw;
}
