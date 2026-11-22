/* USA LEVEL_16.REL:0x166C20, 208-byte candidate (21 November 2026).
 * Measured pinned: 5 differing words; first difference at 0x68.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Block {
    char pad0[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Block;

typedef struct Rec {
    void *eff;
    char pad04[0x38];
    int w3C;
} Rec;

typedef struct Obj {
    char pad0[0x45];
    unsigned char b45;
    char pad46[0x12];
    Rec *rec;
    char pad5C[8];
    unsigned int flags64;
} Obj;

extern Block *D_001BE018;
extern void func_168998(int a, Obj *o);
extern void func_038148(void *e);
extern int func_168B80(int a);
extern void func_1172E0(void *e);
extern void func_073518(Obj *o, Block *b, int a, int b2, int c, int d, int e, int f, float f1, float f2, float f3, float f4);

void func_166C20(Obj *o, int a)
{
    Rec *r;
    void *e;

    r = o->rec;
    e = r->eff;
    func_168998(a, o);
    if (e != 0) {
        func_038148(e);
        if (func_168B80(a) != 0) {
            func_1172E0(e);
        }
        r->eff = 0;
    }
    o->flags64 |= 0x20;
    r->w3C = a;
    o->b45 = 4;
    if (D_001BE018 != 0) {
        func_073518(o, D_001BE018, 0, 0, 0, 0, 0, 1, D_001BE018->f14, D_001BE018->f18, D_001BE018->f1C, D_001BE018->f20);
    }
}
