/* USA LEVEL_10.REL:0x19D558, 140-byte candidate (14 November 2026).
 * Measured pinned: 6 differing words; first difference at 0x54.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct { char pad00[0x14]; float f14; float f18; float f1C; float f20; } Cfg;
typedef struct {
    char pad00[0x68];
    int w68;
    char pad6C[4];
    int w70;
    int w74;
    unsigned char mode;
    char pad79[0xF];
    char *res;
    char pad8C[0x8C];
    int w118;
} Rec;
typedef struct { char pad00[0x58]; Rec *rec; } Obj;

extern Cfg *D_003A02F8;
extern void func_081168(char *record);
extern void func_081000(Obj *o, Cfg *c, char **p, int a3, int t0, int t1, int t2, int t3, float f0, float f1, float f2, float f3);

void func_19D558(Obj *o, int mode)
{
    Rec *rec = o->rec;

    if (rec->mode != mode) {
        rec->w68 = 0;
        rec->w70 = 0;
        rec->w74 = 0;
        rec->mode = mode;
        if (mode) {
            func_081168(rec->res);
        } else {
            Cfg *c = D_003A02F8;

            if (c) {
                func_081000(o, c, &rec->res, 0, 0, 0, 0, 1, c->f14, c->f18, c->f1C, c->f20);
            }
            rec->w118 = 0;
        }
    }
}
