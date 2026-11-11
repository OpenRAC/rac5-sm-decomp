/* LEVEL_04:0x18F518 -- placement copy of LEVEL_01_183F78.c: initialises the state table, copies the default record and sets two packed fields; second entry scales a value by a lens ratio. */
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

extern Slot D_003B0820[4];
extern Blk D_00221B00;
extern Rec D_003B1160;
extern char D_00221908[];

extern void func_189398(void);
extern void func_189780(void);
extern void func_189A08(Slot *s);
extern void func_202038(Blk *b);
extern void func_1938D8(void *p);
extern void func_188CA8(void);
extern void func_18CEB0(void);
extern float func_06C8B0(Obj *o);

void func_18F518(void)
{
    Slot *s;

    func_189398();
    func_189780();
    s = D_003B0820;
    do {
        func_189A08(s);
        s++;
    } while (s < D_003B0820 + 4);
    func_202038(&D_00221B00);
    *(Blk *)&D_003B1160 = D_00221B00;
    D_003B1160.w4 = ((D_003B1160.w4 & 0x07FFFFFF) | 0xB8000000) & 0xFFFFFC3F;
    D_003B1160.w4 |= 0x80;
    func_1938D8(D_00221908);
    func_188CA8();
    func_18CEB0();
}

float func_18F668(Obj *o)
{
    Obj2 *q;
    float one;
    float r;

    one = 1.0f;
    q = o->p->p58;
    r = func_06C8B0(o);
    return (0.026179941f / r - one) * q->f190 + one;
}
