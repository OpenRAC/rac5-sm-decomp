struct Pair_08F170 {
    char pad_00[0x20D4];
    unsigned short first;
    unsigned short second;
};

extern struct Pair_08F170 D_00245710;

void func_08F170(unsigned short first, unsigned short second)
{
    struct Pair_08F170 *pair = &D_00245710;
    pair->first = first;
    pair->second = second;
}
