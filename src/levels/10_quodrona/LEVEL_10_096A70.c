struct Flags_096A70 {
    char pad_00[8];
    int f08;
    char pad_0C[0x2C];
    int f38;
};

extern struct Flags_096A70 D_002A1690;

void func_096A70(void)
{
    struct Flags_096A70 *flags = &D_002A1690;
    flags->f08 = 0;
    flags->f38 = 0;
}
