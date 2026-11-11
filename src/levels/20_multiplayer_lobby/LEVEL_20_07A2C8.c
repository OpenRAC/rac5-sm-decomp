struct Flags {
    char pad[0x20D0];
    unsigned int bits;
};

extern struct Flags D_00177C50;

void func_07A2C8(int bit)
{
    D_00177C50.bits |= 1 << bit;
}
