/* LEVEL_08:0x18D598 -- relocates the two offset fields of the object's record, keeping the first only when its target is valid. */
extern int D_0024FC54;
extern void func_0300E0(void *a0);

struct Rec_18D598 {
    char pad_00[0x2C];
    int w_2C;
    int w_30;
};

struct Obj_18D598 {
    char pad_00[0x54];
    struct Rec_18D598 *rec;
};

void func_18D598(struct Obj_18D598 *a0)
{
    struct Rec_18D598 *r = a0->rec;
    int t;

    if (r->w_2C != 0) {
        t = D_0024FC54 + r->w_2C;
        if (*(int *)(t + 0x40) == 0) {
            r->w_2C = 0;
        } else {
            r->w_2C = t;
        }
    }
    func_0300E0(r);
    if (r->w_30 != 0) {
        r->w_30 = D_0024FC54 + r->w_30;
    }
}
