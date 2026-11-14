/* USA LEVEL_02.REL:0x030090, 152-byte candidate (14 November 2026).
 * Measured pinned --flag=-fno-gcse: 21 differing words; first difference at
 * 64.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern int D_0021BD54;

struct Sub {
    char pad_00[0x14];
    unsigned short kind;
};

struct Obj {
    char pad_00[0x10];
    int w_10;
    struct Sub *p_14;
    int w_18;
    char pad_1C[0xC];
    unsigned char b28;
    unsigned char b29;
};

int func_030090(struct Obj *a0)
{
    int t;
    int has;

    if (a0->w_10 != 0) {
        a0->w_10 = D_0021BD54 + a0->w_10;
    }
    if (a0->w_18 != 0) {
        t = D_0021BD54 + a0->w_18;
        if (*(int *)(t + 0x40) == 0) {
            a0->w_18 = 0;
        } else {
            a0->w_18 = t;
        }
    }
    if (a0->p_14 == 0) {
        has = 0;
    } else {
        has = 1;
    }
    a0->p_14 = (struct Sub *)(D_0021BD54 + (int)a0->p_14);
    if (has) {
        if (a0->p_14->kind != 2) {
            return 0;
        }
    }
    a0->b28 = 2;
    a0->b29 = 0;
    return 1;
}
