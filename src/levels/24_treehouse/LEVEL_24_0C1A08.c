/* LEVEL_24:0x0C1A08 -- placement copy of LEVEL_01_0C8140.c: state reset callback: runs the three reset helpers, clears a status byte between them and the last one, then calls the slot setter with (1, 1). */
extern char D_001C009C;
extern void func_129350(void);
extern void func_128AB8(void);
extern int func_128890(void);
extern int func_018E98(int a0, int a1);

void func_0C1A08(void)
{
    func_129350();
    func_128AB8();
    D_001C009C = 0;
    func_128890();
    func_018E98(1, 1);
}
