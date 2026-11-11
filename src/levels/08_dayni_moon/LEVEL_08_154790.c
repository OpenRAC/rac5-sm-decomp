/* LEVEL_08:0x154790 -- placement copy of LEVEL_04_14F6F8.c: when a flag byte is clear, derives a counter through two helpers and returns the smaller of the stored and derived values. */

struct Sub {
    char pad_00[0x1C];
    unsigned int w_1C;
    char pad_20[0x28 - 0x20];
    unsigned char b_28;
};

struct Obj {
    char pad_00[0x54];
    struct Sub *p_54;
};

int func_154C90(void *a0);
int func_027A30(int a0, int a1);

unsigned int func_154790(struct Obj *a0)
{
    struct Sub *s0;
    unsigned int v;
    unsigned int *cur;
    unsigned int *pp;
    int r;

    s0 = a0->p_54;
    if (s0->b_28 != 0) {
        return 0;
    }
    r = func_154C90(a0);
    v = func_027A30(r, 0xFF) + 1;
    cur = &s0->w_1C;
    pp = (*cur < v) ? cur : &v;
    return *pp;
}
