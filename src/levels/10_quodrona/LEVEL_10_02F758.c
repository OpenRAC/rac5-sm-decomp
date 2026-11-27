/* LEVEL_10:0x02F758 -- placement copy of LEVEL_02_030090.c: rebases three link fields by a global offset, then reports whether the chained record is ready. */

typedef struct Obj030090 {
    unsigned char pad_00[0x10];
    int f_10;
    int f_14;
    int f_18;
    unsigned char pad_1C[0xC];
    unsigned char b_28;
    unsigned char b_29;
} Obj030090;

extern int D_0020F9F4;

static __inline__ int Rebase(int *p)
{
    if (*p == 0)
        return 0;
    *p = D_0020F9F4 + *p;
    return 1;
}

int func_02F758(Obj030090 *o) {
    int p;

    if (o->f_10 != 0) {
        o->f_10 = D_0020F9F4 + o->f_10;
    }
    if (o->f_18 != 0) {
        p = D_0020F9F4 + o->f_18;
        if (*(int *)(p + 0x40) == 0) {
            o->f_18 = 0;
        } else {
            o->f_18 = p;
        }
    }
    if (Rebase(&o->f_14) && *(unsigned short *)((unsigned char *)o->f_14 + 0x14) != 2)
        return 0;
    o->b_29 = 0;
    o->b_28 = 2;
    return 1;
}
