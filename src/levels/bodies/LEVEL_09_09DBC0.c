struct Flags {
    char pad[0x20D0];
    unsigned int bits;
};

extern struct Flags D_00284040;

void func_09DBC0(int bit)
{
    D_00284040.bits |= 1 << bit;
}
