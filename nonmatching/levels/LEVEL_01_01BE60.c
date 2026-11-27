/* USA LEVEL_01:01BE60, 216-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 216 bytes: 11 differing words; first difference +0x30. No matching credit.
 * Remaining issue: loop-invariant constant: retail keeps 1 in a hoisted register for the kind==1
 * movz (xor v0,v0,t1) so the table bases shift to t5/t6; ours folds it to xori; offset+base
 * order fixed with (i << 6) + (unsigned int)ents; switch forms 232 B; 7 flags x 3 profiles, 4
 * test forms same
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x01BE60 -- picks a preferred entry from a per-group table. */
struct Ent {
    unsigned char used;
    char pad[11];
    int kind;
    int prio;
    char pad2[0x2C];
};
struct Grp {
    struct Ent *ents;
    unsigned int count;
};
extern struct Grp D_001F0EE0[];

struct Ent *func_01BE60(int g)
{
    struct Ent *best = 0;
    struct Ent *three = 0;
    struct Ent *one = 0;
    unsigned int i;

    for (i = 0; i < D_001F0EE0[g].count; i++) {
        struct Ent *e = (struct Ent *)((i << 6) + (unsigned int)D_001F0EE0[g].ents);

        if (e->used == 0) {
            if (e->kind == 2) {
                if (best == 0 || e->prio > best->prio)
                    best = e;
            } else if (e->kind == 3) {
                three = e;
            } else if (e->kind == 1) {
                one = e;
            }
        }
    }
    if (best)
        return best;
    return one ? one : three;
}
