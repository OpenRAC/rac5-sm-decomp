/* LEVEL_09:0x0C53F0 -- placement copy of LEVEL_01_0C8140.c: state reset callback: runs the three reset helpers, clears a status byte between them and the last one, then calls the slot setter with (1, 1). */
extern char D_001D921C;
extern void func_12C7E8(void);
extern void func_12BF50(void);
extern int func_12BD28(void);
extern int func_019C98(int a0, int a1);

void func_0C53F0(void)
{
    func_12C7E8();
    func_12BF50();
    D_001D921C = 0;
    func_12BD28();
    func_019C98(1, 1);
}
