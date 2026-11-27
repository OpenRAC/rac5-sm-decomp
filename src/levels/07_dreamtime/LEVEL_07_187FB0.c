/* LEVEL_07:0x187FB0 -- placement copy of LEVEL_03_17AFC0.c: state handler: when the sixth argument matches the global tag, toggles the object's state byte (storing the matching half-word code), releases the linked slot if one is held, runs the shared steps, spawns the global's aimed effect when set and returns 3; returns 1 otherwise. */
struct Obj;

typedef struct {
    unsigned short h00;
    char pad02;
    unsigned char b03;
} Slot;

typedef struct {
    int f00;
    char pad04[0];
    unsigned char b04;
    char pad05[3];
    int f08;
} Rec;

typedef struct {
    char pad00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Aim;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0xE];
    Rec *rec;
    Slot *slot;
    char pad5C[0x18];
    short s74;
} Obj;

typedef struct {
    char pad[0x68];
} Entry;

extern int D_0024AFDC;
extern Entry D_00244FF8[];
extern Aim *D_003AB8B0;
extern void func_082B38(Obj *o, Aim *t, int a2, int a3, int a4, int a5, int a6, int a7, float f0, float f1, float f2, float f3);
extern void func_0976E0(struct Obj *o, unsigned int index);
extern int func_0B5D00(int index);
extern void func_186658(int a, int b, int c);

static __inline__ void Release(Entry *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_0976E0((struct Obj *)pool, *h);
        *h = 0xFFFF;
    }
}

int func_187FB0(Obj *o, int a1, int a2, int a3, int a4, int a5)
{
    Rec *rec = o->rec;
    Slot *slot = o->slot;
    Aim *aim;

    if (a5 != D_0024AFDC) {
        return 1;
    }
    if (o->state == 1) {
        o->s74 = 4;
        o->state = 0;
    } else {
        o->s74 = 2;
        o->state = 1;
    }
    if (rec->b04 == 0) {
        Release(&D_00244FF8[slot->b03], &slot->h00);
    }
    func_0B5D00(-0x74);
    func_186658(rec->f00, rec->f08, (o->state ^ 1) == 0);
    aim = D_003AB8B0;
    if (aim != 0) {
        func_082B38(o, aim, 0, 0, 0, 0, 0, 1, aim->f14, aim->f18, aim->f1C, aim->f20);
    }
    return 3;
}
