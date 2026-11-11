struct Pair_08F030 {
    char pad_00[0x20D4];
    unsigned short first;
    unsigned short second;
};

extern struct Pair_08F030 D_001F2480;

void func_08F030(unsigned short first, unsigned short second)
{
    struct Pair_08F030 *pair = &D_001F2480;
    pair->first = first;
    pair->second = second;
}
