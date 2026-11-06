extern int D_0033E330[];
extern void func_0BE5F0(void);
extern void func_0BE530(void);
extern void func_0BE850(void);

void func_0BE590(void)
{
    if (D_0033E330[5] == 0 && D_0033E330[12] == 0) {
        if (D_0033E330[21] == 0) *((char *)D_0033E330 + 0x2c) = 0;
    } else {
        func_0BE5F0();
        func_0BE530();
        func_0BE850();
    }
}
