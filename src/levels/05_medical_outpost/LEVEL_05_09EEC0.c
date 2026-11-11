struct Flags {
    char pad[0x20D0];
    unsigned int bits;
};

extern struct Flags D_00288780;

void func_09EEC0(int bit)
{
    D_00288780.bits |= 1 << bit;
}
