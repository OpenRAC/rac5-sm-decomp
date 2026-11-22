/* LEVEL_06:0x0C2A40 -- placement copy of LEVEL_01_0C8140.c: state reset callback: runs the three reset helpers, clears a status byte between them and the last one, then calls the slot setter with (1, 1). */
extern char D_001DE31C;
extern void func_129F20(void);
extern void func_129688(void);
extern int func_129460(void);
extern int func_0190A8(int a0, int a1);

void func_0C2A40(void)
{
    func_129F20();
    func_129688();
    D_001DE31C = 0;
    func_129460();
    func_0190A8(1, 1);
}
