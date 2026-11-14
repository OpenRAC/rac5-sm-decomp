/* USA LEVEL_03.REL:0x18DB90, 116-byte candidate (14 November 2026).
 * Measured pinned: 2 differing words; first difference at 0x54.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern void *memset(void *dst, int value, unsigned int size);

typedef struct Cfg {
    char pad0[0xD];
    unsigned char flag;
} Cfg;

typedef struct Rec {
    char pad0[0x130];
    unsigned char b130;
} Rec;

typedef struct Obj {
    char pad0[0x54];
    Cfg *cfg;
    Rec *rec;
    char pad5C[0x76 - 0x5C];
    unsigned char b76;
    unsigned char b77;
} Obj;

int func_18DB90(Obj *o)
{
    Rec *r = o->rec;
    Cfg *c = o->cfg;
    unsigned char h;
    unsigned char w;

    memset(r, 0, 0x134);
    if (c->flag) {
        h = 0x14;
        w = 0x19;
    } else {
        h = 0x19;
        w = 0x20;
    }
    o->b77 = h;
    o->b76 = w;
    r->b130 = 0;
    return 1;
}
