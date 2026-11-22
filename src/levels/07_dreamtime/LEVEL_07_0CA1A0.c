/* LEVEL_07:0x0CA1A0 -- placement copy of LEVEL_01_0C8140.c: state reset callback: runs the three reset helpers, clears a status byte between them and the last one, then calls the slot setter with (1, 1). */
extern char D_0020371C;
extern void func_136850(void);
extern void func_135FB8(void);
extern int func_135D90(void);
extern int func_01AF68(int a0, int a1);

void func_0CA1A0(void)
{
    func_136850();
    func_135FB8();
    D_0020371C = 0;
    func_135D90();
    func_01AF68(1, 1);
}
