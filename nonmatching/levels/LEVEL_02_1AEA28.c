/* USA LEVEL_02:1AEA28, 276-byte candidate; measured 26 November 2026.
 * Profile sdk991111, assembler gnu-ee-trial; options: default.
 * Compiled 240 bytes: 38 differing words; first difference +0x7C. No matching credit.
 * Remaining issue: CSE of the global high part: sdk991111 gives the retail return-0 chain, rec
 * in a0 and both Fixup blocks (first 0x7C bytes exact, 61 -> 38 words); retail then reloads lui
 * 0x22 + D_0021BD54 in every block and keeps the Rebase nonzero flag as a branch-built 0/1 in a2
 * tested after the store, ours shares one high register and folds the flag into the slot test
 * (244 vs 276 B); -fno-gcse, -fexceptions and five flag forms measured (the per-block lui needs
 * -fno-cse-follow-jumps/-fno-cse-skip-blocks, not on the accepted list)
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_02:0x1AEA28 -- rebases the offsets of the object's record into pointers: the first two and the third must have valid targets (otherwise it fails), the fourth is a plain offset, the last two are validated but may be cleared; returns 1. */
typedef struct Res {
    char pad_00[0x40];
    int field_40;
} Res;

typedef struct Rec {
    int w00;
    int w04;
    int w08;
    int w0C;
    char pad_10[0x10];
    int w20;
    int w24;
} Rec;

typedef struct Obj {
    char pad_00[0x54];
    Rec *rec;
} Obj;

extern int D_0021BD54;

static __inline__ int Fixup(int *slot)
{
    Res *res;

    if (*slot == 0)
        return 0;
    res = (Res *)(D_0021BD54 + *slot);
    if (res->field_40 == 0) {
        *slot = 0;
        return 0;
    }
    *slot = (int)res;
    return 1;
}

static __inline__ int Rebase(int *slot)
{
    int nonzero;

    nonzero = *slot != 0;
    *slot = D_0021BD54 + *slot;
    return nonzero;
}

static __inline__ void FixupOpt(int *slot)
{
    Res *res;

    if (*slot != 0) {
        res = (Res *)(D_0021BD54 + *slot);
        if (res->field_40 == 0) {
            *slot = 0;
        } else {
            *slot = (int)res;
        }
    }
}

int func_1AEA28(Obj *self)
{
    Rec *rec = self->rec;

    if (!Fixup(&rec->w00))
        return 0;
    if (!Fixup(&rec->w04))
        return 0;
    if (!Rebase(&rec->w08))
        return 0;
    if (rec->w0C != 0)
        rec->w0C = D_0021BD54 + rec->w0C;
    FixupOpt(&rec->w20);
    FixupOpt(&rec->w24);
    return 1;
}
