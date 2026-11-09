/* LEVEL_15.REL:0x12F840: reviewed 84-byte candidate, held for ABI review.
 * Stores a helper result for a scaled count and the raw count into the output
 * record.
 * pinned C with gnu-ee-trial links 84/84 bytes and is byte-exact at this and 1
 * other USA placement, but the prototypes disagree.
 * It declares func_0D4FE0 returning int with (int, int, pointer, int), but the
 * accepted LEVEL_15_0D4FE0.c defines it returning void with (pointer, pointer,
 * pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_0D4FE0(int size, int zero, void *tbl, int n);
extern unsigned char D_00171500[];

struct Out {
    int w00;
    int w04;
};

struct In {
    unsigned char pad00[0x14];
    unsigned short h14;
};

void func_12F840(struct Out *o, struct In *in)
{
    unsigned short n;

    n = in->h14;
    o->w00 = func_0D4FE0(n * 56, 0, D_00171500, 11);
    o->w04 = n;
}
