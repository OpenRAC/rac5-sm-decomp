struct Flags_058BB8 {
    char pad_00[0x20];
    unsigned char lower;
    unsigned char upper;
};

extern struct Flags_058BB8 D_00225C90;

void func_058BB8(void)
{
    struct Flags_058BB8 *flags = &D_00225C90;
    flags->lower = 1;
    flags->upper = 1;
}
