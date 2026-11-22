/* LEVEL_22:0x0B65F0 -- placement copy of LEVEL_01_0C8140.c: state reset callback: runs the three reset helpers, clears a status byte between them and the last one, then calls the slot setter with (1, 1). */
extern char D_0014E79C;
extern void func_10AD20(void);
extern void func_10A488(void);
extern int func_10A260(void);
extern int func_016EC0(int a0, int a1);

void func_0B65F0(void)
{
    func_10AD20();
    func_10A488();
    D_0014E79C = 0;
    func_10A260();
    func_016EC0(1, 1);
}
