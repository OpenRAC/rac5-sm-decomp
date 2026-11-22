/* USA LEVEL_08.REL:0x1E3228, 324-byte candidate (21 November 2026).
 * Measured pinned: 10 differing words; first difference at 0x80.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    int w0;
    int w4;
    int w8;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
    char pad58[0x64 - 0x58];
    unsigned int flags;
    char pad68[0x76 - 0x68];
    unsigned char b76;
    unsigned char b77;
} Obj;

extern int D_0024FC54;
extern unsigned char D_002801B0[];
extern void func_028EA0(void);
extern unsigned int func_027AD8(int index, unsigned int bit);

int func_1E3228(Obj *o)
{
    Rec *rec;
    int a;
    int b;
    int t;
    int ok1;
    int ok2;
    int ok3;
    int r;
    int bad;

    o->b76 = 0;
    rec = o->rec;
    o->b77 = 0;
    o->flags = o->flags | 0x20;
    func_028EA0();
    a = rec->w0;
    if (a == 0) {
        ok1 = 0;
    } else {
        rec->w0 = D_0024FC54 + a;
        ok1 = 1;
    }
    bad = ok1 ^ 1;
    b = rec->w4;
    if (b == 0) {
        ok2 = 0;
    } else {
        rec->w4 = D_0024FC54 + b;
        ok2 = 1;
    }
    if (!ok2)
        bad = 1;
    ok3 = 0;
    if (rec->w8 != 0) {
        t = D_0024FC54 + rec->w8;
        if (*(int *)(t + 0x40) == 0) {
            rec->w8 = 0;
            ok3 = 0;
        } else {
            rec->w8 = t;
            ok3 = 1;
        }
    }
    r = 0;
    if (ok3 && !bad) {
        if (func_027AD8(0x7A, 5) != 0)
            D_002801B0[0xD] = 0x40;
        else
            D_002801B0[0xD] = 1;
        if (func_027AD8(0x7A, 6) != 0)
            D_002801B0[0xE] = 0x40;
        else
            D_002801B0[0xE] = 1;
        if (func_027AD8(0x7A, 4) != 0)
            D_002801B0[0xC] = 0x40;
        else
            D_002801B0[0xC] = 1;
        r = 1;
    }
    return r;
}
