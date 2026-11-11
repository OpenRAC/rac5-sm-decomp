struct Pair_08FC78 {
    char pad_00[0x20D4];
    unsigned short first;
    unsigned short second;
};

extern struct Pair_08FC78 D_00254410;

void func_08FC78(unsigned short first, unsigned short second)
{
    struct Pair_08FC78 *pair = &D_00254410;
    pair->first = first;
    pair->second = second;
}
