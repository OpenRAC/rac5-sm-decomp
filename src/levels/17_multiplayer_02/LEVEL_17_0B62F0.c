/* LEVEL_17:0x0B62F0 -- placement copy of LEVEL_01_0C8140.c: state reset callback: runs the three reset helpers, clears a status byte between them and the last one, then calls the slot setter with (1, 1). */
extern char D_0018E4A4;
extern void func_10FB38(void);
extern void func_10F2E8(void);
extern int func_10F170(void);
extern int func_018598(int a0, int a1);

void func_0B62F0(void)
{
    func_10FB38();
    func_10F2E8();
    D_0018E4A4 = 0;
    func_10F170();
    func_018598(1, 1);
}
