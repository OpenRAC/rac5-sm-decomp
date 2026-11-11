/* LEVEL_04:0x1DF950 -- placement copy of LEVEL_01_1CC120.c: releases inactive records' references, then links the rest and spreads a measured offset down each chain. */

struct Ref1CC120 {
    unsigned short h_00;
    char pad_02;
    unsigned char b_03;
};
struct Rec1CC120 {
    char pad_00[0x34];
    float f_34;
    char pad_38[0x20];
    struct Ref1CC120 *ref_58;
    char pad_5C[0x08];
    unsigned int w_64;
    struct Rec1CC120 *link_68;
    char pad_6C[0x0C];
    unsigned char b_78;
    char pad_79[0x07];
};
struct Slot1CC120 {
    char pad_00[0x68];
};

extern struct Slot1CC120 D_00249EF8[];

void func_098950(struct Slot1CC120 *s, int h);
struct Rec1CC120 *func_1DF720(float *out, struct Rec1CC120 *r);

void func_1DF950(int base, int n)
{
    struct Rec1CC120 *arr;
    struct Rec1CC120 *p;
    struct Rec1CC120 *p2;
    struct Rec1CC120 *end;
    struct Rec1CC120 *end2;
    struct Rec1CC120 *q;
    struct Ref1CC120 *r;
    struct Slot1CC120 *slot;
    float d[1];

    arr = (struct Rec1CC120 *)base;
    end = arr + n;
    for (p = arr; p != end; p++) {
        if ((((p->w_64 & 0x2F) ^ 1) | (p->b_78 & 0x18)) != 0) {
            r = p->ref_58;
            slot = &D_00249EF8[r->b_03];
            if (r->h_00 != 0xFFFF) {
                func_098950(slot, r->h_00);
                r->h_00 = 0xFFFF;
            }
        }
    }
    p2 = arr;
    end2 = p2 + n;
    for (; p2 != end2; p2++) {
        if ((((p2->w_64 & 0x2F) ^ 1) | (p2->b_78 & 0x18)) == 0) {
            q = func_1DF720(d, p2);
            if (q != 0) {
                q->link_68 = p2;
                p2->b_78 |= 1;
            }
            p2->f_34 = p2->f_34 + d[0];
            q = p2->link_68;
            while (q != 0) {
                q->f_34 = q->f_34 + d[0];
                q = q->link_68;
            }
        }
    }
}
