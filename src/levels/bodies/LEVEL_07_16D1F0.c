/* LEVEL_07:0x16D1F0 -- sets a latch when the owner byte is set, otherwise checks a global byte, a pointer, and a helper result. */

extern unsigned char D_0021BB9C;
extern unsigned char D_0024AA40[];

int func_086800(void *a0, void *a1);

struct Sub {
    unsigned char pad00[0x04];
    void *p04;
    unsigned char pad08[0x1C - 0x08];
    unsigned char b1C;
    unsigned char pad1D[0x1F - 0x1D];
    unsigned char b1F;
};

struct Obj {
    unsigned char pad00[0x54];
    struct Sub *p54;
};

int func_16D1F0(struct Obj *a0)
{
    struct Sub *s;
    unsigned char *base;

    s = a0->p54;
    if (s->b1F != 0) {
        s->b1C = 1;
        return 1;
    }
    if (D_0021BB9C != 0) {
        return 0;
    }
    if (s->p04 != 0) {
        base = D_0024AA40;
        if (func_086800(s->p04, base + 0x30) != 0) {
            return 1;
        }
    }
    return 0;
}
