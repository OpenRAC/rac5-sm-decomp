extern int D_00343230[];
extern void func_0C1DA8(void);
extern void func_0C1CE8(void);
extern void func_0C2008(void);

void func_0C1D48(void)
{
    if (D_00343230[5] == 0 && D_00343230[12] == 0) {
        if (D_00343230[21] == 0) *((char *)D_00343230 + 0x2c) = 0;
    } else {
        func_0C1DA8();
        func_0C1CE8();
        func_0C2008();
    }
}
