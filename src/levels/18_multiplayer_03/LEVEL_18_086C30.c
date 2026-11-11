struct Flags_086C30 {
    char pad_00[8];
    int f08;
    char pad_0C[0x2C];
    int f38;
};

extern struct Flags_086C30 D_0024EA50;

void func_086C30(void)
{
    struct Flags_086C30 *flags = &D_0024EA50;
    flags->f08 = 0;
    flags->f38 = 0;
}
