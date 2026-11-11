/* LEVEL_08:0x03CA68 -- placement copy of LEVEL_01_037998.c: runs the shared reset sequence, then builds three packed handles from the table's entries 27, 11 and 48 and stores them in their globals. */
extern int D_002E7040[];
extern char D_002843D0[];
extern int D_0023D4B0;
extern int D_0023D4B4;
extern int D_0023D4B8;
extern void func_03C9C8(char *obj);
extern void func_06BB38(void);
extern void func_058F00(void);
extern int func_11AA40(unsigned int value);
extern void func_11C048(unsigned int value);
extern void func_03C610(void);

void func_03CA68(void)
{
    func_03C9C8(D_002843D0);
    func_06BB38();
    func_058F00();
    D_0023D4B4 = func_11AA40(((unsigned int)D_002E7040[27] << 16) | 0xA00010C1u);
    D_0023D4B8 = func_11AA40(((unsigned int)D_002E7040[11] << 16) | 0xA00010C1u);
    D_0023D4B0 = ((int (*)(unsigned int))func_11C048)(((unsigned int)D_002E7040[48] << 16) | 0xA0001041u);
    func_03C610();
}
