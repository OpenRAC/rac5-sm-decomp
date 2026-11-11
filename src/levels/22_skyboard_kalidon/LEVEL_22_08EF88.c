struct Flags {
    char pad[0x20D0];
    unsigned int bits;
};

extern struct Flags D_001F2480;

void func_08EF88(int bit)
{
    D_001F2480.bits |= 1 << bit;
}
