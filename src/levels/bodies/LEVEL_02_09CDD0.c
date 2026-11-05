struct Flags_09CDD0 {
    char pad_00[8];
    int f08;
    char pad_0C[0x2C];
    int f38;
};

extern struct Flags_09CDD0 D_002AF790;

void func_09CDD0(void)
{
    struct Flags_09CDD0 *flags = &D_002AF790;
    flags->f08 = 0;
    flags->f38 = 0;
}
