struct Flags_055448 {
    char pad_00[0x20];
    unsigned char lower;
    unsigned char upper;
};

extern struct Flags_055448 D_00204E10;

void func_055448(void)
{
    struct Flags_055448 *flags = &D_00204E10;
    flags->lower = 1;
    flags->upper = 1;
}
