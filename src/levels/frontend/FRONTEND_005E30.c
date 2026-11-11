/* FRONTEND:0x005E30 -- placement copy of LEVEL_01_0A09B0.c. */
struct Pair_0A09B0 {
    char pad_00[0x20D4];
    unsigned short first;
    unsigned short second;
};

extern struct Pair_0A09B0 D_0010C510;

void func_005E30(unsigned short first, unsigned short second)
{
    struct Pair_0A09B0 *pair = &D_0010C510;
    pair->first = first;
    pair->second = second;
}
