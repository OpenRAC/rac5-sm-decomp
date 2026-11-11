struct Pair_09DC68 {
    char pad_00[0x20D4];
    unsigned short first;
    unsigned short second;
};

extern struct Pair_09DC68 D_00284040;

void func_09DC68(unsigned short first, unsigned short second)
{
    struct Pair_09DC68 *pair = &D_00284040;
    pair->first = first;
    pair->second = second;
}
