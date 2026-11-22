/* LEVEL_20:0x0A12E0 -- placement copy of LEVEL_01_0C8140.c: state reset callback: runs the three reset helpers, clears a status byte between them and the last one, then calls the slot setter with (1, 1). */
extern char D_000FD58C;
extern void func_0E33A8(void);
extern void func_0E2B58(void);
extern int func_0E29E0(void);
extern int func_0169D0(int a0, int a1);

void func_0A12E0(void)
{
    func_0E33A8();
    func_0E2B58();
    D_000FD58C = 0;
    func_0E29E0();
    func_0169D0(1, 1);
}
