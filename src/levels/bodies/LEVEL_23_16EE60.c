/* LEVEL_23:0x16EE60 -- placement copy of LEVEL_01_183F78.c: initialises the state table, copies the default record and sets two packed fields; second entry scales a value by a lens ratio. */
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

extern Slot D_00364478[4];
extern Blk D_001DB968;
extern Rec D_00364DB8;
extern char D_001DB770[];

extern void func_168CE0(void);
extern void func_1690C8(void);
extern void func_169350(Slot *s);
extern void func_1B6F30(Blk *b);
extern void func_173220(void *p);
extern void func_1685F0(void);
extern void func_16C7F8(void);
extern float func_064600(Obj *o);

void func_16EE60(void)
{
    Slot *s;

    func_168CE0();
    func_1690C8();
    s = D_00364478;
    do {
        func_169350(s);
        s++;
    } while (s < D_00364478 + 4);
    func_1B6F30(&D_001DB968);
    *(Blk *)&D_00364DB8 = D_001DB968;
    D_00364DB8.w4 = ((D_00364DB8.w4 & 0x07FFFFFF) | 0xB8000000) & 0xFFFFFC3F;
    D_00364DB8.w4 |= 0x80;
    func_173220(D_001DB770);
    func_1685F0();
    func_16C7F8();
}

float func_16EFB0(Obj *o)
{
    Obj2 *q;
    float one;
    float r;

    one = 1.0f;
    q = o->p->p58;
    r = func_064600(o);
    return (0.026179941f / r - one) * q->f190 + one;
}
