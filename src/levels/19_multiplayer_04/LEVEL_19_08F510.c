struct Pair_08F510 {
    char pad_00[0x20D4];
    unsigned short first;
    unsigned short second;
};

extern struct Pair_08F510 D_00254590;

void func_08F510(unsigned short first, unsigned short second)
{
    struct Pair_08F510 *pair = &D_00254590;
    pair->first = first;
    pair->second = second;
}
