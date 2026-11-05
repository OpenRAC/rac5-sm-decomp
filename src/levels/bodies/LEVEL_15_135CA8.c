struct Flags_135CA8 {
    int f00;
    char pad_04[0x14];
    int f18;
    char pad_1C[8];
    int f24;
};

extern struct Flags_135CA8 D_002F4FBC;

void func_135CA8(void)
{
    struct Flags_135CA8 *flags = &D_002F4FBC;
    flags->f00 = 0;
    flags->f18 = 0;
    flags->f24 = 0;
}
