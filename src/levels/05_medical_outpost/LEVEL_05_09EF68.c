struct Pair_09EF68 {
    char pad_00[0x20D4];
    unsigned short first;
    unsigned short second;
};

extern struct Pair_09EF68 D_00288780;

void func_09EF68(unsigned short first, unsigned short second)
{
    struct Pair_09EF68 *pair = &D_00288780;
    pair->first = first;
    pair->second = second;
}
