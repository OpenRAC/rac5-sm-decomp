struct Flags_092E58 {
    char pad_00[8];
    int f08;
    char pad_0C[0x2C];
    int f38;
};

extern struct Flags_092E58 D_0027FA10;

void func_092E58(void)
{
    struct Flags_092E58 *flags = &D_0027FA10;
    flags->f08 = 0;
    flags->f38 = 0;
}
