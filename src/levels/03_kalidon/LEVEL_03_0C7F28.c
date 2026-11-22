/* LEVEL_03:0x0C7F28 -- placement copy of LEVEL_01_0C8140.c: state reset callback: runs the three reset helpers, clears a status byte between them and the last one, then calls the slot setter with (1, 1). */
extern char D_00207A9C;
extern void func_131C18(void);
extern void func_131380(void);
extern int func_131158(void);
extern int func_01A610(int a0, int a1);

void func_0C7F28(void)
{
    func_131C18();
    func_131380();
    D_00207A9C = 0;
    func_131158();
    func_01A610(1, 1);
}
