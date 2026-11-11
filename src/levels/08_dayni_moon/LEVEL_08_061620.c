struct Flags_061620 {
    char pad_00[0x20];
    unsigned char lower;
    unsigned char upper;
};

extern struct Flags_061620 D_002881A0;

void func_061620(void)
{
    struct Flags_061620 *flags = &D_002881A0;
    flags->lower = 1;
    flags->upper = 1;
}
