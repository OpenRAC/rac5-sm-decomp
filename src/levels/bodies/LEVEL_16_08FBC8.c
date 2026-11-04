struct Flags {
    char pad[0x20D0];
    unsigned int bits;
};

extern struct Flags D_00254410;

void func_08FBC8(int bit)
{
    D_00254410.bits |= 1 << bit;
}
