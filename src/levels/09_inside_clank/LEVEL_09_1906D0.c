/* LEVEL_09:0x1906D0 -- placement copy of LEVEL_07_1AD010.c: toggles or latches an object state depending on a request flag. */
typedef struct K {
    char pad0[0x24];
    unsigned f24;
} K;
typedef struct D {
    char pad0[0x40];
    K *f40;
} D;
typedef struct S {
    char *f0;
    char pad4[8];
    char *fC;
    char pad10[1];
    unsigned char b11;
} S;
typedef struct W {
    char pad0[0x18];
    int f18;
} W;
typedef struct O {
    char pad0[0x45];
    unsigned char b45;
    unsigned char b46;
    char pad47[0xD];
    S *f54;
    W *f58;
    char pad5C[0x14];
    int f70;
} O;
extern D *D_0021CBF4;
extern void func_18F7B8(D *d, char *a, char *b, char *c, int e);

int func_1906D0(O *o, int unused, int flag)
{
    S *s;
    W *w;
    s = o->f54;
    w = o->f58;
    if (s->b11 == 0) {
        D *d;
        char *q;
        if (flag != 1)
            return 0;
        d = D_0021CBF4;
        q = o->b46 ? s->fC : s->f0;
        if (d != 0 && d->f40->f24 == 0x90ADE4EB)
            func_18F7B8(d, q + 0x30, q + 0x10, q + 0x20, s->fC == 0);
        if (s->fC)
            o->b46 = !o->b46;
        return 1;
    }
    if (flag != 1)
        return 0;
    if (o->b45)
        return 0;
    w->f18 = 0;
    o->b45 = flag;
    o->f70 = 0;
    return 0;
}
