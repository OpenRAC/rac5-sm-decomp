struct Flags_08C120 {
    char pad_00[8];
    int f08;
    char pad_0C[0x2C];
    int f38;
};

extern struct Flags_08C120 D_002696D0;

void func_08C120(void)
{
    struct Flags_08C120 *flags = &D_002696D0;
    flags->f08 = 0;
    flags->f38 = 0;
}
