/* LEVEL_10:0x1865B8 -- placement copy of LEVEL_01_183F78.c: initialises the state table, copies the default record and sets two packed fields; second entry scales a value by a lens ratio. */
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

extern Slot D_0039F400[4];
extern Blk D_002112A8;
extern Rec D_0039FD40;
extern char D_002110B0[];

extern void func_180438(void);
extern void func_180820(void);
extern void func_180AA8(Slot *s);
extern void func_1F1ED0(Blk *b);
extern void func_18A978(void *p);
extern void func_17FD48(void);
extern void func_183F50(void);
extern float func_069C78(Obj *o);

void func_1865B8(void)
{
    Slot *s;

    func_180438();
    func_180820();
    s = D_0039F400;
    do {
        func_180AA8(s);
        s++;
    } while (s < D_0039F400 + 4);
    func_1F1ED0(&D_002112A8);
    *(Blk *)&D_0039FD40 = D_002112A8;
    D_0039FD40.w4 = ((D_0039FD40.w4 & 0x07FFFFFF) | 0xB8000000) & 0xFFFFFC3F;
    D_0039FD40.w4 |= 0x80;
    func_18A978(D_002110B0);
    func_17FD48();
    func_183F50();
}

float func_186708(Obj *o)
{
    Obj2 *q;
    float one;
    float r;

    one = 1.0f;
    q = o->p->p58;
    r = func_069C78(o);
    return (0.026179941f / r - one) * q->f190 + one;
}
