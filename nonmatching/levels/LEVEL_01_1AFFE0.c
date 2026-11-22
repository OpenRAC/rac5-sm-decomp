/* USA LEVEL_01.REL:0x1AFFE0, 340-byte candidate (21 November 2026).
 * Measured pinned: 25 differing words; first difference at 0x54.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    int w[6];
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

extern int D_00206D94;
extern unsigned char D_002087A4;
extern unsigned char D_00230F38;
extern void func_028928(void);

static __inline__ int Rebase(int *p)
{
    int ok;

    if (*p == 0) {
        ok = 0;
    } else {
        *p = D_00206D94 + *p;
        ok = 1;
    }
    return ok;
}

int func_1AFFE0(Obj *o)
{
    Rec *r;
    int bad;

    o->b76 = 0;
    o->b77 = 0;
    o->flags |= 0x20;
    r = o->rec;
    func_028928();
    bad = Rebase(&r->w[0]) ^ 1;
    if (!Rebase(&r->w[1]))
        bad = 1;
    if (!Rebase(&r->w[2]))
        bad = 1;
    if (!Rebase(&r->w[3]))
        bad = 1;
    if (!Rebase(&r->w[4]))
        bad = 1;
    if (!Rebase(&r->w[5]))
        bad = 1;
    D_002087A4 = 1;
    D_00230F38 = 0;
    return bad ? 0 : 1;
}
