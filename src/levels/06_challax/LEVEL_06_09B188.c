struct Pair_09B188 {
    char pad_00[0x20D4];
    unsigned short first;
    unsigned short second;
};

extern struct Pair_09B188 D_00289640;

void func_09B188(unsigned short first, unsigned short second)
{
    struct Pair_09B188 *pair = &D_00289640;
    pair->first = first;
    pair->second = second;
}
