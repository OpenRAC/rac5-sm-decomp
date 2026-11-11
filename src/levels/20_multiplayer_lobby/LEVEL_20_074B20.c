struct Flags_074B20 {
    char pad_00[8];
    int f08;
    char pad_0C[0x2C];
    int f38;
};

extern struct Flags_074B20 D_00171F10;

void func_074B20(void)
{
    struct Flags_074B20 *flags = &D_00171F10;
    flags->f08 = 0;
    flags->f38 = 0;
}
