struct Flags_05ABC0 {
    char pad_00[0x20];
    unsigned char lower;
    unsigned char upper;
};

extern struct Flags_05ABC0 D_00242310;

void func_05ABC0(void)
{
    struct Flags_05ABC0 *flags = &D_00242310;
    flags->lower = 1;
    flags->upper = 1;
}
