struct Pair_081318 {
    char pad_00[0x20D4];
    unsigned short first;
    unsigned short second;
};

extern struct Pair_081318 D_001B4900;

void func_081318(unsigned short first, unsigned short second)
{
    struct Pair_081318 *pair = &D_001B4900;
    pair->first = first;
    pair->second = second;
}
