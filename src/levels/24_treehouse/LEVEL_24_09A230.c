struct Pair_09A230 {
    char pad_00[0x20D4];
    unsigned short first;
    unsigned short second;
};

extern struct Pair_09A230 D_00268780;

void func_09A230(unsigned short first, unsigned short second)
{
    struct Pair_09A230 *pair = &D_00268780;
    pair->first = first;
    pair->second = second;
}
