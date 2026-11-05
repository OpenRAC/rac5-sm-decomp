struct Flags_096700 {
    char pad_00[8];
    int f08;
    char pad_0C[0x2C];
    int f38;
};

extern struct Flags_096700 D_00298290;

void func_096700(void)
{
    struct Flags_096700 *flags = &D_00298290;
    flags->f08 = 0;
    flags->f38 = 0;
}
