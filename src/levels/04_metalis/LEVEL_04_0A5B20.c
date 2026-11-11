struct Flags {
    char pad[0x20D0];
    unsigned int bits;
};

extern struct Flags D_002B70C0;

void func_0A5B20(int bit)
{
    D_002B70C0.bits |= 1 << bit;
}
