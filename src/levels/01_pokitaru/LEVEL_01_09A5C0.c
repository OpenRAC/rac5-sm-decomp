/* LEVEL_01:0x09A5C0 -- prepares the batch range of one layer for a span of slots and then runs each slot's queued callbacks. */

struct Node09A5C0 {
    struct Node09A5C0 *next_00;
    void (*fn_04)(int, int);
    int arg_08;
};
struct Ent09A5C0 {
    char pad_00[0x14];
};
struct Layer09A5C0 {
    char pad_00[0x28];
    struct Ent09A5C0 *tbl_28;
    char pad_2C[0x08];
    unsigned short cnt_34[0x6CA];
    struct Node09A5C0 *head_DC8[0x251];
};

extern unsigned char g_bDoDraw;
extern struct Layer09A5C0 D_0029AEF8[];

void func_099810(int flag, int layer);
void func_0999B0(struct Ent09A5C0 *a, struct Ent09A5C0 *b);
void func_099938(int flag);

void func_09A5C0(int lo, int hi, int layer)
{
    struct Node09A5C0 *n;
    struct Node09A5C0 **p;
    struct Node09A5C0 **end;
    int j;
    struct Node09A5C0 **q;
    struct Node09A5C0 **heads;
    int flag;
    int i;
    int hi1;
    int c0;
    int c1;
    struct Ent09A5C0 *e0;
    struct Ent09A5C0 *e1;

    if (g_bDoDraw) {
        flag = (unsigned int)(lo - 20) < 4;
        hi1 = hi + 1;
        c0 = D_0029AEF8[layer].cnt_34[lo];
        c1 = D_0029AEF8[layer].cnt_34[hi1];
        if (c1 - c0 > 0) {
            e0 = D_0029AEF8[layer].tbl_28 + c0;
            e1 = D_0029AEF8[layer].tbl_28 + c1;
            func_099810(flag, layer);
            func_0999B0(e0, e1);
            func_099938(flag);
        }
        heads = D_0029AEF8[layer].head_DC8;
        p = heads + lo;
        end = heads + hi1;
        i = lo;
        if (p != end) {
            do {
                n = *p;
                q = p + 1;
                j = i + 1;
                for (; n != 0; n = n->next_00) {
                    n->fn_04(i, n->arg_08);
                }
                p = q;
                i = j;
            } while (p != end);
        }
    }
}
