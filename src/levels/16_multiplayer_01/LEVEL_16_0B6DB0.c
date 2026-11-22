/* LEVEL_16:0x0B6DB0 -- placement copy of LEVEL_01_0C8140.c: state reset callback: runs the three reset helpers, clears a status byte between them and the last one, then calls the slot setter with (1, 1). */
extern char D_0019AEA4;
extern void func_1105C0(void);
extern void func_10FD70(void);
extern int func_10FBF8(void);
extern int func_018C18(int a0, int a1);

void func_0B6DB0(void)
{
    func_1105C0();
    func_10FD70();
    D_0019AEA4 = 0;
    func_10FBF8();
    func_018C18(1, 1);
}
