struct Flags_096330 {
    char pad_00[8];
    int f08;
    char pad_0C[0x2C];
    int f38;
};

extern struct Flags_096330 D_002B3110;

void func_096330(void)
{
    struct Flags_096330 *flags = &D_002B3110;
    flags->f08 = 0;
    flags->f38 = 0;
}
