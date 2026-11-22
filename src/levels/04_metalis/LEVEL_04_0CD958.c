/* LEVEL_04:0x0CD958 -- placement copy of LEVEL_01_0C8140.c: state reset callback: runs the three reset helpers, clears a status byte between them and the last one, then calls the slot setter with (1, 1). */
extern char D_0020859C;
extern void func_13FCD0(void);
extern void func_13F438(void);
extern int func_13F210(void);
extern int func_01A528(int a0, int a1);

void func_0CD958(void)
{
    func_13FCD0();
    func_13F438();
    D_0020859C = 0;
    func_13F210();
    func_01A528(1, 1);
}
