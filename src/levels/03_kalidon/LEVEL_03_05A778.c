struct Flags_05A778 {
    char pad_00[0x20];
    unsigned char lower;
    unsigned char upper;
};

extern struct Flags_05A778 D_00253D90;

void func_05A778(void)
{
    struct Flags_05A778 *flags = &D_00253D90;
    flags->lower = 1;
    flags->upper = 1;
}
