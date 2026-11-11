struct Flags {
    char pad[0x20D0];
    unsigned int bits;
};

extern struct Flags D_002EBB40;

void func_0AB208(int bit)
{
    D_002EBB40.bits |= 1 << bit;
}
