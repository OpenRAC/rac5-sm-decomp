/* USA LEVEL_01.REL:0x1720F8, 264-byte candidate (21 November 2026).
 * Measured pinned: 6 differing words; first difference at 0x80.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    int slots[21];
    int tab[21];
    int w_A8;
} Rec;

typedef struct {
    char pad00[0xC];
    unsigned char b0C;
} Cfg;

typedef struct {
    char pad00[0x46];
    unsigned char b46;
    char pad47[0xD];
    Cfg *cfg;
    Rec *rec;
} Obj;

extern int D_001F6398;
extern void func_097840(int h);
extern void func_080B38(int a);

static __inline__ void Release(int *p)
{
    int h = *p;

    if (h != 0) {
        if (h == D_001F6398) {
            D_001F6398 = 0;
        } else {
            func_097840(h);
        }
    }
    *p = 0;
}

void func_1720F8(Obj *o)
{
    Rec *r;
    Cfg *cfg;
    int i;
    int j;
    int *p;
    int *q;

    cfg = o->cfg;
    r = o->rec;
    p = r->slots;
    for (i = 0; i != 21; i++) {
        Release(p);
        p++;
    }
    p = r->tab;
    q = p;
    for (j = 0; j != 21; j++) {
        Release(p);
        *q = 0;
        q++;
        p++;
    }
    o->b46 = 0;
    if (cfg->b0C != 0) {
        func_080B38(r->w_A8);
    }
}
