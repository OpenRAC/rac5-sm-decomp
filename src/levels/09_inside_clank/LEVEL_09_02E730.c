/* LEVEL_09:0x02E730 -- placement copy of LEVEL_01_02F8D0.c: relocates three offset fields of a record by a global base, keeping the pointer field only when its target is valid. */

extern int D_001F0894;

struct Obj {
    char pad_00[0x10];
    int w_10;
    int w_14;
    int w_18;
};

void func_02E730(struct Obj *a0)
{
    int t;

    if (a0->w_10 != 0) {
        a0->w_10 = D_001F0894 + a0->w_10;
    }
    if (a0->w_18 != 0) {
        t = D_001F0894 + a0->w_18;
        if (*(int *)(t + 0x40) == 0) {
            a0->w_18 = 0;
        } else {
            a0->w_18 = t;
        }
    }
    if (a0->w_14 != 0) {
        a0->w_14 = D_001F0894 + a0->w_14;
    }
}
