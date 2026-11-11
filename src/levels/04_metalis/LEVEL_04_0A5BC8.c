struct Pair_0A5BC8 {
    char pad_00[0x20D4];
    unsigned short first;
    unsigned short second;
};

extern struct Pair_0A5BC8 D_002B70C0;

void func_0A5BC8(unsigned short first, unsigned short second)
{
    struct Pair_0A5BC8 *pair = &D_002B70C0;
    pair->first = first;
    pair->second = second;
}
