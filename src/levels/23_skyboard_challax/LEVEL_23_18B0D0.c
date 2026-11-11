/* LEVEL_23:0x18B0D0 -- placement copy of LEVEL_01_1AB830.c: stores the result of func_11AEE0 for a fixed key (0xDA845AEE) in a global, then calls func_159E48. */
extern int D_001DC10C;
extern int func_11AEE0(unsigned int value);
extern void func_159E48(void);

void func_18B0D0(void)
{
    D_001DC10C = func_11AEE0(0xDA845AEEu);
    func_159E48();
}
