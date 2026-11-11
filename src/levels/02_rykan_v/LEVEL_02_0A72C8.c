struct Pair_0A72C8 {
    char pad_00[0x20D4];
    unsigned short first;
    unsigned short second;
};

extern struct Pair_0A72C8 D_002B3DC0;

void func_0A72C8(unsigned short first, unsigned short second)
{
    struct Pair_0A72C8 *pair = &D_002B3DC0;
    pair->first = first;
    pair->second = second;
}
