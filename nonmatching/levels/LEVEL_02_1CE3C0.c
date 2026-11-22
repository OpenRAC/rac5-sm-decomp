/* USA LEVEL_02.REL:0x1CE3C0, 224-byte candidate (21 November 2026).
 * Measured pinned: 18 differing words; first difference at 0x88.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    int w0;
    int w4;
} Rec;

typedef struct {
    char pad0[0x54];
    Rec *rec;
    char pad58[0x64 - 0x58];
    unsigned int flags;
    char pad68[0x76 - 0x68];
    unsigned char b76;
    unsigned char b77;
} Obj;

typedef struct {
    char pad0[0xC];
    unsigned char b0C;
    unsigned char b0D;
    unsigned char b0E;
} Shared;

extern int D_0023F880[];
extern Shared D_00248430;
extern void func_029110(void);
extern unsigned int func_027C98(int index, unsigned int bit);
extern int func_0891A0(int *keys, int nkeys, char **out, unsigned int *idx);

int func_1CE3C0(Obj *o)
{
    Rec *r = o->rec;
    int v;

    o->b77 = 0;
    o->flags |= 0x20;
    o->b76 = 0;
    func_029110();
    if (func_027C98(0x77, 4) != 0) {
        D_00248430.b0C = 0x40;
    } else {
        D_00248430.b0C = 1;
    }
    if (func_027C98(0x77, 5) != 0) {
        D_00248430.b0D = 0x40;
    } else {
        D_00248430.b0D = 1;
    }
    v = func_027C98(0x77, 6);
    if (v == 0) {
        r->w4 = 0;
        r->w0 = 0;
        if (func_0891A0(D_0023F880, 5, (char **)r, (unsigned int *)&r->w4) != 0) {
            v = 1;
        } else {
            v = 0x40;
        }
    }
    D_00248430.b0E = v;
    return 1;
}
