struct Pair_07A378 {
    char pad_00[0x20D4];
    unsigned short first;
    unsigned short second;
};

extern struct Pair_07A378 D_00177C50;

void func_07A378(unsigned short first, unsigned short second)
{
    struct Pair_07A378 *pair = &D_00177C50;
    pair->first = first;
    pair->second = second;
}
