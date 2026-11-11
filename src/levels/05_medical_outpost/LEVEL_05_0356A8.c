/* LEVEL_05:0x0356A8 -- placement copy of LEVEL_01_037998.c: runs the shared reset sequence, then builds three packed handles from the table's entries 27, 11 and 48 and stores them in their globals. */
extern int D_00283C80[];
extern char D_00220E40[];
extern int D_001E3970;
extern int D_001E3974;
extern int D_001E3978;
extern void func_035608(char *obj);
extern void func_063F58(void);
extern void func_0517C0(void);
extern int func_107F80(unsigned int value);
extern void func_109C08(unsigned int value);
extern void func_035250(void);

void func_0356A8(void)
{
    func_035608(D_00220E40);
    func_063F58();
    func_0517C0();
    D_001E3974 = func_107F80(((unsigned int)D_00283C80[27] << 16) | 0xA00010C1u);
    D_001E3978 = func_107F80(((unsigned int)D_00283C80[11] << 16) | 0xA00010C1u);
    D_001E3970 = ((int (*)(unsigned int))func_109C08)(((unsigned int)D_00283C80[48] << 16) | 0xA0001041u);
    func_035250();
}
