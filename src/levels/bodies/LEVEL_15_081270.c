struct Flags {
    char pad[0x20D0];
    unsigned int bits;
};

extern struct Flags D_001B4900;

void func_081270(int bit)
{
    D_001B4900.bits |= 1 << bit;
}
