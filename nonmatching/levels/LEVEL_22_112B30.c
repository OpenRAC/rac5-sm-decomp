/* LEVEL_22.REL:0x112B30: reviewed 96-byte candidate, held for ABI review.
 * Four passes over 60-byte records, calling a helper for each set flag byte
 * and clearing it.
 * pinned C with gnu-ee-trial links 96/96 bytes and is byte-exact at this and 1
 * other USA placement, but the prototypes disagree.
 * It declares func_063718 returning void with (pointer), but the accepted
 * LEVEL_22_063718.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct E112B30 {
    char pad0[0x3C];
};

struct C112B30 {
    struct E112B30 ent[4];
    char pad_f0[0x108];
    unsigned char flag[4];
};

struct P112B30 {
    char pad0[0x58];
    struct C112B30 *f58;
};

extern void func_063718(struct E112B30 *e);

void func_112B30(struct P112B30 *p)
{
    struct C112B30 *c;
    int i;

    c = p->f58;
    for (i = 0; i < 4; i++) {
        if (c->flag[i] != 0) {
            func_063718(&c->ent[i]);
            c->flag[i] = 0;
        }
    }
}
