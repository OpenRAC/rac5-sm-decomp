/* LEVEL_03:0x035BD8 -- placement copy of LEVEL_01_037998.c: runs the shared reset sequence, then builds three packed handles from the table's entries 27, 11 and 48 and stores them in their globals. */
extern int D_002B2C40[];
extern char D_0024FFC0[];
extern int D_0020CC70;
extern int D_0020CC74;
extern int D_0020CC78;
extern void func_035B38(char *obj);
extern void func_064C78(void);
extern void func_052058(void);
extern int func_108650(unsigned int value);
extern void func_109570(unsigned int value);
extern void func_035780(void);

void func_035BD8(void)
{
    func_035B38(D_0024FFC0);
    func_064C78();
    func_052058();
    D_0020CC74 = func_108650(((unsigned int)D_002B2C40[27] << 16) | 0xA00010C1u);
    D_0020CC78 = func_108650(((unsigned int)D_002B2C40[11] << 16) | 0xA00010C1u);
    D_0020CC70 = ((int (*)(unsigned int))func_109570)(((unsigned int)D_002B2C40[48] << 16) | 0xA0001041u);
    func_035780();
}
