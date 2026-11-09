/* LEVEL_01.REL:0x16CA18: reviewed 116-byte candidate, held for ABI review.
 * Marks one entry flag, bumps a small counter, and conditionally runs a helper
 * on the entry.
 * pinned C with gnu-ee-trial links 116/116 bytes and is byte-exact at this and
 * 8 other USA placements, but the prototypes disagree.
 * It declares func_16F2C8 returning void with (pointer, pointer), but the
 * accepted LEVEL_01_16F2C8.c defines it returning void with (long long, long
 * long).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad_00[0x15];
    unsigned char f_15;
} Sub;

typedef struct {
    char pad_00[0x18];
    unsigned char f_18;
    char pad_19[3];
} Entry;

typedef struct {
    char pad_00[0x158];
    unsigned char f_158;
} Ctx;

typedef struct {
    char pad_00[0x54];
    Sub *f_54;
    Ctx *f_58;
} Obj;

extern void func_16F2C8(Ctx *a0, Sub *a1);

void func_16CA18(Obj *a0, int a1)
{
    Ctx *c;
    Entry *e;
    Sub *t;
    unsigned char v;

    t = a0->f_54;
    c = a0->f_58;
    e = (Entry *)((char *)c + a1 * 28);
    v = e->f_18;
    if ((v & 1) == 0) {
        e->f_18 = v | 1;
        c->f_158 = c->f_158 + 1;
        if (t->f_15 >= c->f_158) {
            e->f_18 = e->f_18 | 2;
            func_16F2C8(c, t);
        }
    }
}
