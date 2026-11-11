/* LEVEL_22:0x02D8E8 -- placement copy of LEVEL_01_037998.c: runs the shared reset sequence, then builds three packed handles from the table's entries 27, 11 and 48 and stores them in their globals. */
extern int D_001ED980[];
extern char D_00186D40[];
extern int D_00153970;
extern int D_00153974;
extern int D_00153978;
extern void func_02D848(char *obj);
extern void func_05BEF8(void);
extern void func_0493E0(void);
extern int func_0E8100(unsigned int value);
extern void func_0E9570(unsigned int value);
extern void func_02D490(void);

void func_02D8E8(void)
{
    func_02D848(D_00186D40);
    func_05BEF8();
    func_0493E0();
    D_00153974 = func_0E8100(((unsigned int)D_001ED980[27] << 16) | 0xA00010C1u);
    D_00153978 = func_0E8100(((unsigned int)D_001ED980[11] << 16) | 0xA00010C1u);
    D_00153970 = ((int (*)(unsigned int))func_0E9570)(((unsigned int)D_001ED980[48] << 16) | 0xA0001041u);
    func_02D490();
}
