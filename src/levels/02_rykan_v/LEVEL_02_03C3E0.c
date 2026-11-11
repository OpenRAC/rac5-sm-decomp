/* LEVEL_02:0x03C3E0 -- placement copy of LEVEL_01_037998.c: runs the shared reset sequence, then builds three packed handles from the table's entries 27, 11 and 48 and stores them in their globals. */
extern int D_002AF2C0[];
extern char D_0024C650[];
extern int D_002095B0;
extern int D_002095B4;
extern int D_002095B8;
extern void func_03C340(char *obj);
extern void func_06B388(void);
extern void func_058B10(void);
extern int func_10FF68(unsigned int value);
extern void func_111BF0(unsigned int value);
extern void func_03BF88(void);

void func_03C3E0(void)
{
    func_03C340(D_0024C650);
    func_06B388();
    func_058B10();
    D_002095B4 = func_10FF68(((unsigned int)D_002AF2C0[27] << 16) | 0xA00010C1u);
    D_002095B8 = func_10FF68(((unsigned int)D_002AF2C0[11] << 16) | 0xA00010C1u);
    D_002095B0 = ((int (*)(unsigned int))func_111BF0)(((unsigned int)D_002AF2C0[48] << 16) | 0xA0001041u);
    func_03BF88();
}
