/* USA LEVEL_02.REL:0x1930A0, 96-byte candidate (14 November 2026).
 * Measured pinned: 16 differing words; first difference at 0x10.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Obj {
    char pad_00[0x45];
    unsigned char state;
} Obj;

typedef struct Link {
    char pad_00[0x3F];
    unsigned char kind;
} Link;

typedef struct Ctx {
    char pad_00[0x40];
    Link *link;
} Ctx;

extern void func_083428(Obj *o, float t, unsigned idx);

int func_1930A0(Obj *o, int a1, int a2, int a3, int a4, Ctx *ctx)
{
    unsigned char kind;

    if (o->state == 2) {
        return 1;
    }
    if (ctx != 0) {
        kind = ctx->link->kind;
        if (kind != 9 && kind != 1) {
            return 1;
        }
    }
    o->state = 2;
    func_083428(o, 0.0f, 1);
    return 3;
}
