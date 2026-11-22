/* LEVEL_05:0x0C66E8 -- placement copy of LEVEL_01_0C8140.c: state reset callback: runs the three reset helpers, clears a status byte between them and the last one, then calls the slot setter with (1, 1). */
extern char D_001DE79C;
extern void func_12F1C8(void);
extern void func_12E930(void);
extern int func_12E708(void);
extern int func_019E40(int a0, int a1);

void func_0C66E8(void)
{
    func_12F1C8();
    func_12E930();
    D_001DE79C = 0;
    func_12E708();
    func_019E40(1, 1);
}
