/* USA LEVEL_04.REL:0x1E2A60, 304-byte candidate (21 November 2026).
 * Measured pinned: 20 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Tmpl;

typedef struct {
    char pad00[0x10];
    char *owner;
} Link;

typedef struct {
    char pad00[0x40];
    Link *link;
} Other;

typedef struct {
    char pad00[0x88];
    char a88[0x94 - 0x88];
    char a94[0xB0 - 0x94];
    char aB0[0xCC - 0xB0];
    int wCC;
    unsigned char bD0;
} Obj;

extern Tmpl *D_003B3DF4;
extern Tmpl *D_003B3DF8;
extern void func_083E30(Other *o, Tmpl *t, void *a, int b, int c, int d, int e, int f, float f0, float f1,
                        float f2, float f3);
extern void func_0F0498(void *p, float a, float b, float c, float d);

void func_1E2A60(Obj *o, Other *other)
{
    Tmpl *t;

    if (*(unsigned int *)(other->link->owner + 0x40) & 1) {
        t = D_003B3DF4;
        if (t != 0)
            func_083E30(other, t, o->a88, 0, 0, 0, 0, 1, t->f14, t->f18, t->f1C, t->f20);
    } else {
        t = D_003B3DF8;
        if (t != 0)
            func_083E30(other, t, o->a88, 0, 0, 0, 0, 1, t->f14, t->f18, t->f1C, t->f20);
    }
    o->wCC = 0;
    o->bD0 = 1;
    func_0F0498(o->aB0, 0.41887906193733215f, 0.10000000149011612f, 0.20000000298023224f, 0.41887906193733215f);
    func_0F0498(o->a94, -0.20943953096866608f, 0.05000000074505806f, 0.10000000149011612f, 0.10471976548433304f);
}
