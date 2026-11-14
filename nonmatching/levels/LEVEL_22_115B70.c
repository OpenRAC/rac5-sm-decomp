/* USA LEVEL_22.REL:0x115B70, 112-byte candidate (14 November 2026).
 * Measured pinned: 17 differing words; first difference at 0x18.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Rec Rec;

struct Rec {
    Rec *next;
    char pad04[0x14 - 0x04];
    Rec *prev;
};

typedef struct {
    char pad00[0x0C];
    int wC;
    char pad10[4];
    int w14;
    char pad18[0x34 - 0x18];
} Entry;

typedef struct {
    char pad00[4];
    Entry *tab;
} Cfg;

typedef struct {
    char pad00[0x40];
    Cfg *cfg;
    unsigned char b44;
    char pad45[0x58 - 0x45];
    Rec *rec;
} Obj;

static __inline__ void Unlink(Rec *rec)
{
    Rec *n;

    n = rec->prev;
    if (n != 0) {
        n->next = rec->next;
        if (rec->next != 0) {
            rec->next->prev = rec->prev;
        }
        rec->prev = 0;
    }
}

void func_115B70(Obj *o)
{
    Rec *rec;
    Entry *e;

    rec = o->rec;
    e = &o->cfg->tab[o->b44];
    if (e->w14 != 0 || e->wC != 0) {
        if (rec->prev != 0) {
            Unlink(rec);
        }
    }
}
