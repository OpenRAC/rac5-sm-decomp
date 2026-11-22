/* LEVEL_23:0x0BEEE0 -- placement copy of LEVEL_01_0C8140.c: state reset callback: runs the three reset helpers, clears a status byte between them and the last one, then calls the slot setter with (1, 1). */
extern char D_001C281C;
extern void func_124FC8(void);
extern void func_124730(void);
extern int func_124508(void);
extern int func_0193B8(int a0, int a1);

void func_0BEEE0(void)
{
    func_124FC8();
    func_124730();
    D_001C281C = 0;
    func_124508();
    func_0193B8(1, 1);
}
