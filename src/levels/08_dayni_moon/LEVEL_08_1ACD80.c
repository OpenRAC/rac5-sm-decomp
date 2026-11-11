/* LEVEL_08:0x1ACD80 -- relocates three offset fields of the object's record by a global base, keeping the last two only when their target is valid. */
extern int D_0024FC54;

struct Rec {
    int w_00;
    int w_04;
    int w_08;
};

struct Obj {
    char pad_00[0x54];
    struct Rec *rec;
};

void func_1ACD80(struct Obj *a0)
{
    struct Rec *r = a0->rec;
    int t;

    if (r->w_00 != 0) {
        r->w_00 = D_0024FC54 + r->w_00;
    }
    if (r->w_04 != 0) {
        t = D_0024FC54 + r->w_04;
        if (*(int *)(t + 0x40) == 0) {
            r->w_04 = 0;
        } else {
            r->w_04 = t;
        }
    }
    if (r->w_08 != 0) {
        t = D_0024FC54 + r->w_08;
        if (*(int *)(t + 0x40) == 0) {
            r->w_08 = 0;
        } else {
            r->w_08 = t;
        }
    }
}
