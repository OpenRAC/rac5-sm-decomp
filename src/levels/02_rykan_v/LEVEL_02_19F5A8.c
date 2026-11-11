/* LEVEL_02:0x19F5A8 -- returns early on a set flag or a failing helper, otherwise clears a word, sets a byte, and decrements a float field. */

struct Q {
    unsigned char pad00[0x70];
    float f70;
};

struct Pair {
    struct Q *p00;
    void *p04;
    unsigned char pad08[0x1C - 0x08];
    unsigned char b1C;
};

struct Obj {
    unsigned char pad00[0x45];
    unsigned char b45;
    unsigned char pad46[0x54 - 0x46];
    struct Pair *p54;
    unsigned char pad58[0x70 - 0x58];
    int w70;
};

int func_19F610(struct Obj *a0, void *a1);

void func_19F5A8(struct Obj *a0)
{
    struct Pair *v;
    struct Q *q;

    v = a0->p54;
    if (v->b1C != 0) {
        return;
    }
    if (func_19F610(a0, v->p04) != 0) {
        return;
    }
    a0->w70 = 0;
    a0->b45 = 2;
    q = a0->p54->p00;
    q->f70 = q->f70 - 1.0f;
}
