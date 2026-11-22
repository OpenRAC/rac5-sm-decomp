/* LEVEL_19:0x0B6688 -- placement copy of LEVEL_01_0C8140.c: state reset callback: runs the three reset helpers, clears a status byte between them and the last one, then calls the slot setter with (1, 1). */
extern char D_0019C024;
extern void func_110C60(void);
extern void func_110410(void);
extern int func_110298(void);
extern int func_018918(int a0, int a1);

void func_0B6688(void)
{
    func_110C60();
    func_110410();
    D_0019C024 = 0;
    func_110298();
    func_018918(1, 1);
}
