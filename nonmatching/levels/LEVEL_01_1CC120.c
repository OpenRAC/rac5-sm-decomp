/* LEVEL_01.REL:0x1CC120: reviewed 360-byte candidate, held for ABI review.
 * Releases inactive records' references, then links the rest and spreads a
 * measured offset down each chain.
 * pinned C with gnu-ee-trial links 360/360 bytes and is byte-exact at this and
 * 13 other USA placements, but the prototypes disagree.
 * It defines the function returning void with (pointer, int), but the accepted
 * caller LEVEL_01_1CC288.c declares it returning void with (int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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

extern struct Slot1CC120 D_0022F6F8[];

void func_095858(struct Slot1CC120 *s, int h);
struct Rec1CC120 *func_1CBEF0(float *out, struct Rec1CC120 *r);

void func_1CC120(struct Rec1CC120 *arr, int n)
{
    struct Rec1CC120 *p;
    struct Rec1CC120 *p2;
    struct Rec1CC120 *end;
    struct Rec1CC120 *end2;
    struct Rec1CC120 *q;
    struct Ref1CC120 *r;
    struct Slot1CC120 *slot;
    float d[1];

    end = arr + n;
    for (p = arr; p != end; p++) {
        if ((((p->w_64 & 0x2F) ^ 1) | (p->b_78 & 0x18)) != 0) {
            r = p->ref_58;
            slot = &D_0022F6F8[r->b_03];
            if (r->h_00 != 0xFFFF) {
                func_095858(slot, r->h_00);
                r->h_00 = 0xFFFF;
            }
        }
    }
    p2 = arr;
    end2 = p2 + n;
    for (; p2 != end2; p2++) {
        if ((((p2->w_64 & 0x2F) ^ 1) | (p2->b_78 & 0x18)) == 0) {
            q = func_1CBEF0(d, p2);
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
