struct Flags_09E620 {
    char pad_00[8];
    int f08;
    char pad_0C[0x2C];
    int f38;
};

extern struct Flags_09E620 D_002E7510;

void func_09E620(void)
{
    struct Flags_09E620 *flags = &D_002E7510;
    flags->f08 = 0;
    flags->f38 = 0;
}
