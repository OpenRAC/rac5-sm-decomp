struct Flags_0997F8 {
    char pad_00[8];
    int f08;
    char pad_0C[0x2C];
    int f38;
};

extern struct Flags_0997F8 D_002B2A90;

void func_0997F8(void)
{
    struct Flags_0997F8 *flags = &D_002B2A90;
    flags->f08 = 0;
    flags->f38 = 0;
}
