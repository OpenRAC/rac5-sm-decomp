/* USA LEVEL_03.REL:0x17AFC0, 268-byte candidate (21 November 2026).
 * Measured pinned: 4 differing words; first difference at 0x60.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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

extern int D_0025055C;
extern Entry D_0024A578[];
extern Aim *D_003B0DE0;
extern void func_0807B0(Obj *o, Aim *t, int a2, int a3, int a4, int a5, int a6, int a7, float f0, float f1, float f2, float f3);
extern void func_095488(struct Obj *o, unsigned int index);
extern int func_0B3A88(int index);
extern void func_179668(int a, int b, int c);

int func_17AFC0(Obj *o, int a1, int a2, int a3, int a4, int a5)
{
    Rec *rec = o->rec;
    Slot *slot = o->slot;
    unsigned int idx;
    struct Obj *entry;
    Aim *aim;

    if (a5 != D_0025055C) {
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
        entry = (struct Obj *)&D_0024A578[slot->b03];
        idx = slot->h00;
        if (idx != 0xFFFF) {
            func_095488(entry, idx);
            slot->h00 = 0xFFFF;
        }
    }
    func_0B3A88(-0x74);
    func_179668(rec->f00, rec->f08, (o->state ^ 1) == 0);
    aim = D_003B0DE0;
    if (aim != 0) {
        func_0807B0(o, aim, 0, 0, 0, 0, 0, 1, aim->f14, aim->f18, aim->f1C, aim->f20);
    }
    return 3;
}
