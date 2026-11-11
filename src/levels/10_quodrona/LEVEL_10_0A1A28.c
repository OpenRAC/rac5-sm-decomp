struct Flags {
    char pad[0x20D0];
    unsigned int bits;
};

extern struct Flags D_002A5CC0;

void func_0A1A28(int bit)
{
    D_002A5CC0.bits |= 1 << bit;
}
