struct Flags_087798 {
    char pad_00[8];
    int f08;
    char pad_0C[0x2C];
    int f38;
};

extern struct Flags_087798 D_0024E850;

void func_087798(void)
{
    struct Flags_087798 *flags = &D_0024E850;
    flags->f08 = 0;
    flags->f38 = 0;
}
