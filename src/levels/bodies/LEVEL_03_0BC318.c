extern int D_003438B0[];
extern void func_0BC378(void);
extern void func_0BC2B8(void);
extern void func_0BC5D8(void);

void func_0BC318(void)
{
    if (D_003438B0[5] == 0 && D_003438B0[12] == 0) {
        if (D_003438B0[21] == 0) *((char *)D_003438B0 + 0x2c) = 0;
    } else {
        func_0BC378();
        func_0BC2B8();
        func_0BC5D8();
    }
}
