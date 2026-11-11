struct Pair_0A0738 {
    char pad_00[0x20D4];
    unsigned short first;
    unsigned short second;
};

extern struct Pair_0A0738 D_002B7740;

void func_0A0738(unsigned short first, unsigned short second)
{
    struct Pair_0A0738 *pair = &D_002B7740;
    pair->first = first;
    pair->second = second;
}
