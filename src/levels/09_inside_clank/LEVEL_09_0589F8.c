struct Flags_0589F8 {
    char pad_00[0x20];
    unsigned char lower;
    unsigned char upper;
};

extern struct Flags_0589F8 D_00220690;

void func_0589F8(void)
{
    struct Flags_0589F8 *flags = &D_00220690;
    flags->lower = 1;
    flags->upper = 1;
}
