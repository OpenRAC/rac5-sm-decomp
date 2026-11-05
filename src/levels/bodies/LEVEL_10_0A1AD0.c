struct Pair_0A1AD0 {
    char pad_00[0x20D4];
    unsigned short first;
    unsigned short second;
};

extern struct Pair_0A1AD0 D_002A5CC0;

void func_0A1AD0(unsigned short first, unsigned short second)
{
    struct Pair_0A1AD0 *pair = &D_002A5CC0;
    pair->first = first;
    pair->second = second;
}
