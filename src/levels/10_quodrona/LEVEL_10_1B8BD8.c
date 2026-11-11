/* LEVEL_10:0x1B8BD8 -- placement copy of LEVEL_01_1AB830.c: stores the result of func_127EC8 for a fixed key (0xDA845AEE) in a global, then calls func_160000. */
extern int D_00211B44;
extern int func_127EC8(unsigned int value);
extern void func_160000(void);

void func_1B8BD8(void)
{
    D_00211B44 = func_127EC8(0xDA845AEEu);
    func_160000();
}
