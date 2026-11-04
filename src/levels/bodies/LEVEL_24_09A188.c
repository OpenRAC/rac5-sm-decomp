struct Flags {
    char pad[0x20D0];
    unsigned int bits;
};

extern struct Flags D_00268780;

void func_09A188(int bit)
{
    D_00268780.bits |= 1 << bit;
}
