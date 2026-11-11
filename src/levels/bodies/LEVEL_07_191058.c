/* LEVEL_07:0x191058 -- placement copy of LEVEL_01_183F78.c: initialises the state table, copies the default record and sets two packed fields; second entry scales a value by a lens ratio. */
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

extern Slot D_003AB928[4];
extern Blk D_0021CC60;
extern Rec D_003AC268;
extern char D_0021CA68[];

extern void func_18AED8(void);
extern void func_18B2C0(void);
extern void func_18B548(Slot *s);
extern void func_1FD148(Blk *b);
extern void func_195418(void *p);
extern void func_18A7E8(void);
extern void func_18E9F0(void);
extern float func_06BB50(Obj *o);

void func_191058(void)
{
    Slot *s;

    func_18AED8();
    func_18B2C0();
    s = D_003AB928;
    do {
        func_18B548(s);
        s++;
    } while (s < D_003AB928 + 4);
    func_1FD148(&D_0021CC60);
    *(Blk *)&D_003AC268 = D_0021CC60;
    D_003AC268.w4 = ((D_003AC268.w4 & 0x07FFFFFF) | 0xB8000000) & 0xFFFFFC3F;
    D_003AC268.w4 |= 0x80;
    func_195418(D_0021CA68);
    func_18A7E8();
    func_18E9F0();
}

float func_1911A8(Obj *o)
{
    Obj2 *q;
    float one;
    float r;

    one = 1.0f;
    q = o->p->p58;
    r = func_06BB50(o);
    return (0.026179941f / r - one) * q->f190 + one;
}
