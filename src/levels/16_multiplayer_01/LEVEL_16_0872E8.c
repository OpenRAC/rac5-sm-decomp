struct Flags_0872E8 {
    char pad_00[8];
    int f08;
    char pad_0C[0x2C];
    int f38;
};

extern struct Flags_0872E8 D_0024E6D0;

void func_0872E8(void)
{
    struct Flags_0872E8 *flags = &D_0024E6D0;
    flags->f08 = 0;
    flags->f38 = 0;
}
