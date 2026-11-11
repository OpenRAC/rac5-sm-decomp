struct Pair_0A09B0 {
    char pad_00[0x20D4];
    unsigned short first;
    unsigned short second;
};

extern struct Pair_0A09B0 D_0029C8C0;

void func_0A09B0(unsigned short first, unsigned short second)
{
    struct Pair_0A09B0 *pair = &D_0029C8C0;
    pair->first = first;
    pair->second = second;
}
