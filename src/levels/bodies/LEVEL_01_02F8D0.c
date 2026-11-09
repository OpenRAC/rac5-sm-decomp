/* LEVEL_01:0x02F8D0 -- relocates three offset fields of a record by a global base, keeping the pointer field only when its target is valid. */

extern int D_00206D94;

struct Obj {
    char pad_00[0x10];
    int w_10;
    int w_14;
    int w_18;
};

void func_02F8D0(struct Obj *a0)
{
    int t;

    if (a0->w_10 != 0) {
        a0->w_10 = D_00206D94 + a0->w_10;
    }
    if (a0->w_18 != 0) {
        t = D_00206D94 + a0->w_18;
        if (*(int *)(t + 0x40) == 0) {
            a0->w_18 = 0;
        } else {
            a0->w_18 = t;
        }
    }
    if (a0->w_14 != 0) {
        a0->w_14 = D_00206D94 + a0->w_14;
    }
}
