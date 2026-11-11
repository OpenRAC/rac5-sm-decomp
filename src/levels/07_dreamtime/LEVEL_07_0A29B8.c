struct Pair_0A29B8 {
    char pad_00[0x20D4];
    unsigned short first;
    unsigned short second;
};

extern struct Pair_0A29B8 D_002B21C0;

void func_0A29B8(unsigned short first, unsigned short second)
{
    struct Pair_0A29B8 *pair = &D_002B21C0;
    pair->first = first;
    pair->second = second;
}
