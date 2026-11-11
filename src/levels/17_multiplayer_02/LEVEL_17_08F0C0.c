struct Flags {
    char pad[0x20D0];
    unsigned int bits;
};

extern struct Flags D_00245710;

void func_08F0C0(int bit)
{
    D_00245710.bits |= 1 << bit;
}
