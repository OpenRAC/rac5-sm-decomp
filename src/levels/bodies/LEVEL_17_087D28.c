struct Flags_087D28 {
    char pad_00[8];
    int f08;
    char pad_0C[0x2C];
    int f38;
};

extern struct Flags_087D28 D_0023F9D0;

void func_087D28(void)
{
    struct Flags_087D28 *flags = &D_0023F9D0;
    flags->f08 = 0;
    flags->f38 = 0;
}
