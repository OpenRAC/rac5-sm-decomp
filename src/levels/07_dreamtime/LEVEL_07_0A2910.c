struct Flags {
    char pad[0x20D0];
    unsigned int bits;
};

extern struct Flags D_002B21C0;

void func_0A2910(int bit)
{
    D_002B21C0.bits |= 1 << bit;
}
