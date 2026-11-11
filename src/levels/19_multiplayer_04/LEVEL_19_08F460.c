struct Flags {
    char pad[0x20D0];
    unsigned int bits;
};

extern struct Flags D_00254590;

void func_08F460(int bit)
{
    D_00254590.bits |= 1 << bit;
}
