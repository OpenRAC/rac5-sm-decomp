struct Flags {
    char pad[0x20D0];
    unsigned int bits;
};

extern struct Flags D_0029C8C0;

void func_0A0908(int bit)
{
    D_0029C8C0.bits |= 1 << bit;
}
