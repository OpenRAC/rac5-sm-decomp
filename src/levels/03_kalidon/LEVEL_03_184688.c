/* LEVEL_03:0x184688 -- placement copy of LEVEL_01_183F78.c: initialises the state table, copies the default record and sets two packed fields; second entry scales a value by a lens ratio. */
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

extern Slot D_003B0EA8[4];
extern Blk D_00220D10;
extern Rec D_003B17E8;
extern char D_00220B18[];

extern void func_17E508(void);
extern void func_17E8F0(void);
extern void func_17EB78(Slot *s);
extern void func_201508(Blk *b);
extern void func_188A48(void *p);
extern void func_17DE18(void);
extern void func_182020(void);
extern float func_0697D0(Obj *o);

void func_184688(void)
{
    Slot *s;

    func_17E508();
    func_17E8F0();
    s = D_003B0EA8;
    do {
        func_17EB78(s);
        s++;
    } while (s < D_003B0EA8 + 4);
    func_201508(&D_00220D10);
    *(Blk *)&D_003B17E8 = D_00220D10;
    D_003B17E8.w4 = ((D_003B17E8.w4 & 0x07FFFFFF) | 0xB8000000) & 0xFFFFFC3F;
    D_003B17E8.w4 |= 0x80;
    func_188A48(D_00220B18);
    func_17DE18();
    func_182020();
}

float func_1847D8(Obj *o)
{
    Obj2 *q;
    float one;
    float r;

    one = 1.0f;
    q = o->p->p58;
    r = func_0697D0(o);
    return (0.026179941f / r - one) * q->f190 + one;
}
