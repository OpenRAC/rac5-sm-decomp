struct Pair_0AB2B0 {
    char pad_00[0x20D4];
    unsigned short first;
    unsigned short second;
};

extern struct Pair_0AB2B0 D_002EBB40;

void func_0AB2B0(unsigned short first, unsigned short second)
{
    struct Pair_0AB2B0 *pair = &D_002EBB40;
    pair->first = first;
    pair->second = second;
}
