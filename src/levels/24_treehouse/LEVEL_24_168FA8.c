/* LEVEL_24:0x168FA8 -- placement copy of LEVEL_01_183F78.c: initialises the state table, copies the default record and sets two packed fields; second entry scales a value by a lens ratio. */
typedef struct Blk {
    char b[0x1A0];
} Blk;

typedef struct Rec {
    int w0;
    unsigned w4;
    char pad[0x198];
} Rec;

typedef struct Slot {
    char b[0x250];
} Slot;

typedef struct Obj2 {
    char pad[0x190];
    float f190;
} Obj2;

typedef struct Mid {
    char pad[0x58];
    Obj2 *p58;
} Mid;

typedef struct Obj {
    char pad[0x5A4];
    Mid *p;
} Obj;

extern Slot D_0035FFC8[4];
extern Blk D_001D93C0;
extern Rec D_00360908;
extern char D_001D91C8[];

extern void func_162E28(void);
extern void func_163210(void);
extern void func_163498(Slot *s);
extern void func_1B9B50(Blk *b);
extern void func_16D368(void *p);
extern void func_162738(void);
extern void func_166940(void);
extern float func_064498(Obj *o);

void func_168FA8(void)
{
    Slot *s;

    func_162E28();
    func_163210();
    s = D_0035FFC8;
    do {
        func_163498(s);
        s++;
    } while (s < D_0035FFC8 + 4);
    func_1B9B50(&D_001D93C0);
    *(Blk *)&D_00360908 = D_001D93C0;
    D_00360908.w4 = ((D_00360908.w4 & 0x07FFFFFF) | 0xB8000000) & 0xFFFFFC3F;
    D_00360908.w4 |= 0x80;
    func_16D368(D_001D91C8);
    func_162738();
    func_166940();
}

float func_1690F8(Obj *o)
{
    Obj2 *q;
    float one;
    float r;

    one = 1.0f;
    q = o->p->p58;
    r = func_064498(o);
    return (0.026179941f / r - one) * q->f190 + one;
}
