/* LEVEL_18:0x0B5D88 -- placement copy of LEVEL_01_0C8140.c: state reset callback: runs the three reset helpers, clears a status byte between them and the last one, then calls the slot setter with (1, 1). */
extern char D_0019C324;
extern void func_10F270(void);
extern void func_10EA20(void);
extern int func_10E8A8(void);
extern int func_018260(int a0, int a1);

void func_0B5D88(void)
{
    func_10F270();
    func_10EA20();
    D_0019C324 = 0;
    func_10E8A8();
    func_018260(1, 1);
}
