struct Flags_0874D0 {
    char pad_00[8];
    int f08;
    char pad_0C[0x2C];
    int f38;
};

extern struct Flags_0874D0 D_001EDE50;

void func_0874D0(void)
{
    struct Flags_0874D0 *flags = &D_001EDE50;
    flags->f08 = 0;
    flags->f38 = 0;
}
