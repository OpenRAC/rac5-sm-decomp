struct Flags {
    char pad[0x20D0];
    unsigned int bits;
};

extern struct Flags D_00289640;

void func_09B0E0(int bit)
{
    D_00289640.bits |= 1 << bit;
}
