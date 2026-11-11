struct Flags_08F500 {
    char pad_00[8];
    int f08;
    char pad_0C[0x2C];
    int f38;
};

extern struct Flags_08F500 D_00264150;

void func_08F500(void)
{
    struct Flags_08F500 *flags = &D_00264150;
    flags->f08 = 0;
    flags->f38 = 0;
}
