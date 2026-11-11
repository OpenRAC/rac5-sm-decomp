/* LEVEL_10:0x169A58 -- looks up an item by a byte index, calls a helper with its field, and on a non-null result calls a second helper with fields of both records. */

struct Mid {
    char pad_00[4];
    int w_04;
    char pad_08[0x2C - 0x08];
    int w_2C;
};

struct Top {
    char pad_00[0x40];
    struct Mid *p_40;
    unsigned char b_44;
    char pad_45[0x54 - 0x45];
    int w_54;
};

struct Ent {
    char pad_00[0x54];
    int w_54;
};

struct Ent *func_07CB88(struct Mid *a0, int a1, int a2, int a3);
void func_0268C0(int a0, int a1, unsigned int a2);

struct Ent *func_169A58(struct Top *a0, int a1, int a2)
{
    struct Mid *s1;
    struct Ent *s0;
    char *it;

    s1 = a0->p_40;
    it = (char *)(a0->b_44 * 0x34 + s1->w_04);
    s0 = func_07CB88(s1, *(int *)(it + 0x20), a1, a2);
    if (s0 != 0) {
        func_0268C0(s0->w_54, a0->w_54, (unsigned int)s1->w_2C >> 4);
    }
    return s0;
}
