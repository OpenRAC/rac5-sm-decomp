/* LEVEL_17:0x167908 -- placement copy of LEVEL_01_1AB830.c: stores the result of func_106410 for a fixed key (0xDA845AEE) in a global, then calls func_140C38. */
extern int D_001B17FC;
extern int func_106410(unsigned int value);
extern void func_140C38(void);

void func_167908(void)
{
    D_001B17FC = func_106410(0xDA845AEEu);
    func_140C38();
}
