struct Flags_098588 {
    char pad_00[8];
    int f08;
    char pad_0C[0x2C];
    int f38;
};

extern struct Flags_098588 D_002ADB90;

void func_098588(void)
{
    struct Flags_098588 *flags = &D_002ADB90;
    flags->f08 = 0;
    flags->f38 = 0;
}
