struct Flags_05CAE8 {
    char pad_00[0x20];
    unsigned char lower;
    unsigned char upper;
};

extern struct Flags_05CAE8 D_0024E810;

void func_05CAE8(void)
{
    struct Flags_05CAE8 *flags = &D_0024E810;
    flags->lower = 1;
    flags->upper = 1;
}
