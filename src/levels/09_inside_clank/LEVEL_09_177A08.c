/* LEVEL_09:0x177A08 -- placement copy of LEVEL_01_183F78.c: initialises the state table, copies the default record and sets two packed fields; second entry scales a value by a lens ratio. */
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

extern Slot D_0037D678[4];
extern Blk D_001F2140;
extern Rec D_0037DFB8;
extern char D_001F1F48[];

extern void func_171888(void);
extern void func_171C70(void);
extern void func_171EF8(Slot *s);
extern void func_1D2CE0(Blk *b);
extern void func_17BDC8(void *p);
extern void func_171198(void);
extern void func_1753A0(void);
extern float func_067A48(Obj *o);

void func_177A08(void)
{
    Slot *s;

    func_171888();
    func_171C70();
    s = D_0037D678;
    do {
        func_171EF8(s);
        s++;
    } while (s < D_0037D678 + 4);
    func_1D2CE0(&D_001F2140);
    *(Blk *)&D_0037DFB8 = D_001F2140;
    D_0037DFB8.w4 = ((D_0037DFB8.w4 & 0x07FFFFFF) | 0xB8000000) & 0xFFFFFC3F;
    D_0037DFB8.w4 |= 0x80;
    func_17BDC8(D_001F1F48);
    func_171198();
    func_1753A0();
}

float func_177B58(Obj *o)
{
    Obj2 *q;
    float one;
    float r;

    one = 1.0f;
    q = o->p->p58;
    r = func_067A48(o);
    return (0.026179941f / r - one) * q->f190 + one;
}
