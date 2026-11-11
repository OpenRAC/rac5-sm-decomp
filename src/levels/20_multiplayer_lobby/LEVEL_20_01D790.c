/* LEVEL_20:0x01D790 -- placement copy of LEVEL_16_020970.c: initializes a sub-object's defaults and resolves hashed ids into tables. */
typedef struct {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int pad18;
    int f1C;
    int f20;
    int pad24;
    int f28;
    int pad2C;
    float f30;
    char f34;
    char f35;
    char pad36[2];
    int f38;
    int f3C;
    char pad40[0xC];
    float f4C;
} Sub020970;

typedef struct {
    char pad[0x998];
    Sub020970 sub;
} Obj020970;

extern int D_000FF0CC;
extern int D_000FF0D0[8];
extern int D_001227E8[8];
extern int func_0E5778(int a);
extern int func_0DEBE0(int a);

void func_01D790(Obj020970 *o)
{
    Sub020970 *s = &o->sub;
    unsigned int i;
    int r = func_0E5778(2);

    s->f14 = 0;
    s->f10 = r ? 2 : 0;
    s->fC = 0;
    s->f8 = 1;
    s->f28 = 0;
    s->f1C = 0;
    s->f20 = 0;
    s->f30 = 1.0f;
    s->f34 = 0;
    s->f38 = 1;
    s->f3C = 1;
    s->f0 = 0;
    s->f4 = 0;
    s->f35 = 1;
    s->f4C = 1.0f;
    D_000FF0CC = func_0DEBE0(0xE4F93912);
    for (i = 0; i < 8; i++)
        D_000FF0D0[i] = func_0DEBE0(D_001227E8[i]);
}
