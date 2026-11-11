/* LEVEL_01:0x183F78 -- initialises the state table, copies the default record and sets two packed fields; second entry scales a value by a lens ratio. */
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

extern Slot D_00395FE0[4];
extern Blk D_002083F0;
extern Rec D_00396920;
extern char D_002081F8[];

extern void func_17DDF8(void);
extern void func_17E1E0(void);
extern void func_17E468(Slot *s);
extern void func_1E8E78(Blk *b);
extern void func_188338(void *p);
extern void func_17D708(void);
extern void func_181910(void);
extern float func_06AE48(Obj *o);

void func_183F78(void)
{
    Slot *s;

    func_17DDF8();
    func_17E1E0();
    s = D_00395FE0;
    do {
        func_17E468(s);
        s++;
    } while (s < D_00395FE0 + 4);
    func_1E8E78(&D_002083F0);
    *(Blk *)&D_00396920 = D_002083F0;
    D_00396920.w4 = ((D_00396920.w4 & 0x07FFFFFF) | 0xB8000000) & 0xFFFFFC3F;
    D_00396920.w4 |= 0x80;
    func_188338(D_002081F8);
    func_17D708();
    func_181910();
}

float func_1840C8(Obj *o)
{
    Obj2 *q;
    float one;
    float r;

    one = 1.0f;
    q = o->p->p58;
    r = func_06AE48(o);
    return (0.026179941f / r - one) * q->f190 + one;
}
