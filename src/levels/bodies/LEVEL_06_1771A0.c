/* LEVEL_06:0x1771A0 -- placement copy of LEVEL_01_183F78.c: initialises the state table, copies the default record and sets two packed fields; second entry scales a value by a lens ratio. */
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

extern Slot D_00382D18[4];
extern Blk D_001F7250;
extern Rec D_00383658;
extern char D_001F7058[];

extern void func_171020(void);
extern void func_171408(void);
extern void func_171690(Slot *s);
extern void func_1D7DC0(Blk *b);
extern void func_17B560(void *p);
extern void func_170930(void);
extern void func_174B38(void);
extern float func_067C08(Obj *o);

void func_1771A0(void)
{
    Slot *s;

    func_171020();
    func_171408();
    s = D_00382D18;
    do {
        func_171690(s);
        s++;
    } while (s < D_00382D18 + 4);
    func_1D7DC0(&D_001F7250);
    *(Blk *)&D_00383658 = D_001F7250;
    D_00383658.w4 = ((D_00383658.w4 & 0x07FFFFFF) | 0xB8000000) & 0xFFFFFC3F;
    D_00383658.w4 |= 0x80;
    func_17B560(D_001F7058);
    func_170930();
    func_174B38();
}

float func_1772F0(Obj *o)
{
    Obj2 *q;
    float one;
    float r;

    one = 1.0f;
    q = o->p->p58;
    r = func_067C08(o);
    return (0.026179941f / r - one) * q->f190 + one;
}
