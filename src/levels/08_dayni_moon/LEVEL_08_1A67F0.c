/* LEVEL_08:0x1A67F0 -- placement copy of LEVEL_01_183F78.c: initialises the state table, copies the default record and sets two packed fields; second entry scales a value by a lens ratio. */
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

extern Slot D_003E6EF8[4];
extern Blk D_002518A8;
extern Rec D_003E7838;
extern char D_002516B0[];

extern void func_1A0670(void);
extern void func_1A0A58(void);
extern void func_1A0CE0(Slot *s);
extern void func_22FFB0(Blk *b);
extern void func_1AABB0(void *p);
extern void func_19FF80(void);
extern void func_1A4188(void);
extern float func_070690(Obj *o);

void func_1A67F0(void)
{
    Slot *s;

    func_1A0670();
    func_1A0A58();
    s = D_003E6EF8;
    do {
        func_1A0CE0(s);
        s++;
    } while (s < D_003E6EF8 + 4);
    func_22FFB0(&D_002518A8);
    *(Blk *)&D_003E7838 = D_002518A8;
    D_003E7838.w4 = ((D_003E7838.w4 & 0x07FFFFFF) | 0xB8000000) & 0xFFFFFC3F;
    D_003E7838.w4 |= 0x80;
    func_1AABB0(D_002516B0);
    func_19FF80();
    func_1A4188();
}

float func_1A6940(Obj *o)
{
    Obj2 *q;
    float one;
    float r;

    one = 1.0f;
    q = o->p->p58;
    r = func_070690(o);
    return (0.026179941f / r - one) * q->f190 + one;
}
