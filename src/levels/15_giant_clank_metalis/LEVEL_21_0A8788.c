/* LEVEL_21:0x0A8788 -- placement copy of LEVEL_01_0C8140.c: state reset callback: runs the three reset helpers, clears a status byte between them and the last one, then calls the slot setter with (1, 1). */
extern char D_00144084;
extern void func_0F2718(void);
extern void func_0F1E80(void);
extern int func_0F1C58(void);
extern int func_016A90(int a0, int a1);

void func_0A8788(void)
{
    func_0F2718();
    func_0F1E80();
    D_00144084 = 0;
    func_0F1C58();
    func_016A90(1, 1);
}
