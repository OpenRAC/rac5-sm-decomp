struct Flags {
    char pad[0x20D0];
    unsigned int bits;
};

extern struct Flags D_0026DD00;

void func_097650(int bit)
{
    D_0026DD00.bits |= 1 << bit;
}
