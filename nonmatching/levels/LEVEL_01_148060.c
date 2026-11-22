/* USA LEVEL_01.REL:0x148060, 268-byte candidate (21 November 2026).
 * Measured pinned: 2 differing words; first difference at 0x1C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[0x24];
    unsigned int tag;
} Cfg;

typedef struct {
    int w00;
    char pad04[0xF4];
    int w_F8;
} Link;

typedef struct {
    char pad00[0x3C];
    int w3C;
} Info;

typedef struct {
    char pad00[0x40];
    Cfg *cfg;
    char pad44[0x14];
    Link **link;
} Obj;

extern Info *func_024628(int a, int b);
extern int func_148328(Obj *o, char *elem, char *out, int w);
extern void func_1483D8(Obj *o, char kind, char n);

int func_148060(Obj *o, char *elems_in, char *out, char kind, unsigned int n)
{
    Info *info;
    unsigned int i;
    char *elems = elems_in;
    int found;

    if (o->cfg->tag != 0xE997AD78) {
        return 0;
    }
    found = 0;
    i = 0;
    info = func_024628(2, (*o->link)->w_F8);
    for (; i < n; i++) {
        if (func_148328(o, elems, out + kind * 16, info->w3C) != 0) {
            found = 1;
        }
        elems += 16;
    }
    if (found) {
        func_1483D8(o, kind, n);
    }
    return found;
}
