extern int D_0027E5F0[];
extern void func_0AAA40(void);
extern void func_0AA980(void);
extern void func_0AACA0(void);

void func_0AA9E0(void)
{
    if (D_0027E5F0[5] == 0 && D_0027E5F0[12] == 0) {
        if (D_0027E5F0[21] == 0) *((char *)D_0027E5F0 + 0x2c) = 0;
    } else {
        func_0AAA40();
        func_0AA980();
        func_0AACA0();
    }
}
