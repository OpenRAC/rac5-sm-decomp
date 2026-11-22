/* USA LEVEL_01.REL:0x01BE60, 216-byte candidate (21 November 2026).
 * Measured pinned: 14 differing words; first difference at 0x30.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Ent {
    unsigned char active_00;
    char pad_01[0xC - 1];
    int kind_0C;
    int prio_10;
    char pad_14[0x40 - 0x14];
} Ent;

typedef struct Group {
    Ent *ents;
    unsigned int count;
} Group;

extern Group D_001F0EE0[];

Ent *func_01BE60(int idx)
{
    Ent *best;
    Ent *last1;
    Ent *last3;
    Ent *e;
    unsigned int i;

    last3 = 0;
    last1 = 0;
    best = 0;
    for (i = 0; i < D_001F0EE0[idx].count; i++) {
        e = D_001F0EE0[idx].ents + i;
        if (e->active_00 != 0)
            continue;
        if (e->kind_0C == 2) {
            if (best == 0 || best->prio_10 < e->prio_10)
                best = e;
        } else if (e->kind_0C == 3) {
            last3 = e;
        } else if (e->kind_0C == 1) {
            last1 = e;
        }
    }
    if (best != 0)
        return best;
    if (last1 != 0)
        last3 = last1;
    return last3;
}
