struct Flags_07A5C0 {
    char pad_00[8];
    int f08;
    char pad_0C[0x2C];
    int f38;
};

extern struct Flags_07A5C0 D_001B02D0;

void func_07A5C0(void)
{
    struct Flags_07A5C0 *flags = &D_001B02D0;
    flags->f08 = 0;
    flags->f38 = 0;
}
