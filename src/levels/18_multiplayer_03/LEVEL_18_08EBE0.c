struct Flags {
    char pad[0x20D0];
    unsigned int bits;
};

extern struct Flags D_00254790;

void func_08EBE0(int bit)
{
    D_00254790.bits |= 1 << bit;
}
