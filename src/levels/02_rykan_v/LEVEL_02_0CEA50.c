/* LEVEL_02:0x0CEA50 -- placement copy of LEVEL_01_0C8140.c: state reset callback: runs the three reset helpers, clears a status byte between them and the last one, then calls the slot setter with (1, 1). */
extern char D_0020409C;
extern void func_139C00(void);
extern void func_139368(void);
extern int func_139140(void);
extern int func_01B208(int a0, int a1);

void func_0CEA50(void)
{
    func_139C00();
    func_139368();
    D_0020409C = 0;
    func_139140();
    func_01B208(1, 1);
}
