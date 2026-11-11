struct Flags_093DF8 {
    char pad_00[8];
    int f08;
    char pad_0C[0x2C];
    int f38;
};

extern struct Flags_093DF8 D_00284150;

void func_093DF8(void)
{
    struct Flags_093DF8 *flags = &D_00284150;
    flags->f08 = 0;
    flags->f38 = 0;
}
