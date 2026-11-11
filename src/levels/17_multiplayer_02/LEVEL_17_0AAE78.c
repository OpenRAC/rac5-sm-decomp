extern int D_00267C70[];
extern void func_0AAED8(void);
extern void func_0AAE18(void);
extern void func_0AB178(void);

void func_0AAE78(void)
{
    if (D_00267C70[5] == 0 && D_00267C70[12] == 0) {
        if (D_00267C70[21] == 0) *((char *)D_00267C70 + 0x2c) = 0;
    } else {
        func_0AAED8();
        func_0AAE18();
        func_0AB178();
    }
}
