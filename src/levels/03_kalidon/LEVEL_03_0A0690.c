struct Flags {
    char pad[0x20D0];
    unsigned int bits;
};

extern struct Flags D_002B7740;

void func_0A0690(int bit)
{
    D_002B7740.bits |= 1 << bit;
}
