struct Pair_08EC90 {
    char pad_00[0x20D4];
    unsigned short first;
    unsigned short second;
};

extern struct Pair_08EC90 D_00254790;

void func_08EC90(unsigned short first, unsigned short second)
{
    struct Pair_08EC90 *pair = &D_00254790;
    pair->first = first;
    pair->second = second;
}
