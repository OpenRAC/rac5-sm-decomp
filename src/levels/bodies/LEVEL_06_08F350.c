struct Flags_08F350 {
    char pad_00[8];
    int f08;
    char pad_0C[0x2C];
    int f38;
};

extern struct Flags_08F350 D_00285010;

void func_08F350(void)
{
    struct Flags_08F350 *flags = &D_00285010;
    flags->f08 = 0;
    flags->f38 = 0;
}
