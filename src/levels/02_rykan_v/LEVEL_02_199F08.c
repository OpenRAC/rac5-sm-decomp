/* LEVEL_02:0x199F08 -- placement copy of LEVEL_01_183F78.c: initialises the state table, copies the default record and sets two packed fields; second entry scales a value by a lens ratio. */
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

extern Slot D_003ADFF0[4];
extern Blk D_0021D408;
extern Rec D_003AE930;
extern char D_0021D210[];

extern void func_193D88(void);
extern void func_194170(void);
extern void func_1943F8(Slot *s);
extern void func_1FDB10(Blk *b);
extern void func_19E2C8(void *p);
extern void func_193698(void);
extern void func_1978A0(void);
extern float func_06FEE0(Obj *o);

void func_199F08(void)
{
    Slot *s;

    func_193D88();
    func_194170();
    s = D_003ADFF0;
    do {
        func_1943F8(s);
        s++;
    } while (s < D_003ADFF0 + 4);
    func_1FDB10(&D_0021D408);
    *(Blk *)&D_003AE930 = D_0021D408;
    D_003AE930.w4 = ((D_003AE930.w4 & 0x07FFFFFF) | 0xB8000000) & 0xFFFFFC3F;
    D_003AE930.w4 |= 0x80;
    func_19E2C8(D_0021D210);
    func_193698();
    func_1978A0();
}

float func_19A058(Obj *o)
{
    Obj2 *q;
    float one;
    float r;

    one = 1.0f;
    q = o->p->p58;
    r = func_06FEE0(o);
    return (0.026179941f / r - one) * q->f190 + one;
}
