/* LEVEL_02:0x0D03B8 -- placement copy of LEVEL_01_0C9AA8.c: picks a state-dependent call, clears globals and arms a flag. */
extern char *D_00208C2C;
extern short D_0024C750;
extern char D_00215CAD;
extern int D_00215CA0;
extern int D_00215CA4;
extern char D_00215C9C;
extern int D_002161F8;
extern char D_00215CAC;
extern void func_0CFDD8(int a);
extern int func_1394C8(void);
extern void func_0D03B0(void);

void func_0D03B8(void)
{
    int state = *(int *)(D_00208C2C + 0x1C6C);
    switch (state) {
    case 0x17:
        if (D_0024C750 != 0xD)
            break;
    case 0x16:
        func_0CFDD8(0x16);
        break;
    case 0xF:
    case 0x15:
        func_0CFDD8(0x18);
        break;
    }
    D_00215C9C = 0;
    D_00215CAD = 0;
    D_00215CA0 = 0;
    D_00215CA4 = 0;
    D_002161F8 = func_1394C8();
    D_00215CAC = 1;
    func_0D03B0();
}
