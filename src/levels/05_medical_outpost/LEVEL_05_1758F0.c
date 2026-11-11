/* LEVEL_05:0x1758F0 -- placement copy of LEVEL_01_183F78.c: initialises the state table, copies the default record and sets two packed fields; second entry scales a value by a lens ratio. */
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

extern Slot D_00381CD0[4];
extern Blk D_001F7358;
extern Rec D_00382610;
extern char D_001F7160[];

extern void func_16F770(void);
extern void func_16FB58(void);
extern void func_16FDE0(Slot *s);
extern void func_1D8270(Blk *b);
extern void func_179CB0(void *p);
extern void func_16F080(void);
extern void func_173288(void);
extern float func_068AB0(Obj *o);

void func_1758F0(void)
{
    Slot *s;

    func_16F770();
    func_16FB58();
    s = D_00381CD0;
    do {
        func_16FDE0(s);
        s++;
    } while (s < D_00381CD0 + 4);
    func_1D8270(&D_001F7358);
    *(Blk *)&D_00382610 = D_001F7358;
    D_00382610.w4 = ((D_00382610.w4 & 0x07FFFFFF) | 0xB8000000) & 0xFFFFFC3F;
    D_00382610.w4 |= 0x80;
    func_179CB0(D_001F7160);
    func_16F080();
    func_173288();
}

float func_175A40(Obj *o)
{
    Obj2 *q;
    float one;
    float r;

    one = 1.0f;
    q = o->p->p58;
    r = func_068AB0(o);
    return (0.026179941f / r - one) * q->f190 + one;
}
