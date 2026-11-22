/* LEVEL_08:0x0D3068 -- placement copy of LEVEL_01_0C8140.c: state reset callback: runs the three reset helpers, clears a status byte between them and the last one, then calls the slot setter with (1, 1). */
extern char D_00237F9C;
extern void func_144D88(void);
extern void func_1444F0(void);
extern int func_1442C8(void);
extern int func_01B220(int a0, int a1);

void func_0D3068(void)
{
    func_144D88();
    func_1444F0();
    D_00237F9C = 0;
    func_1442C8();
    func_01B220(1, 1);
}
