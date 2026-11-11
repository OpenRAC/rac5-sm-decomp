struct Pair_0976F8 {
    char pad_00[0x20D4];
    unsigned short first;
    unsigned short second;
};

extern struct Pair_0976F8 D_0026DD00;

void func_0976F8(unsigned short first, unsigned short second)
{
    struct Pair_0976F8 *pair = &D_0026DD00;
    pair->first = first;
    pair->second = second;
}
