/* LEVEL_10:0x0C9580 -- placement copy of LEVEL_01_0C8140.c: state reset callback: runs the three reset helpers, clears a status byte between them and the last one, then calls the slot setter with (1, 1). */
extern char D_001F841C;
extern void func_1316D0(void);
extern void func_130E18(void);
extern int func_130BF0(void);
extern int func_019F28(int a0, int a1);

void func_0C9580(void)
{
    func_1316D0();
    func_130E18();
    D_001F841C = 0;
    func_130BF0();
    func_019F28(1, 1);
}
