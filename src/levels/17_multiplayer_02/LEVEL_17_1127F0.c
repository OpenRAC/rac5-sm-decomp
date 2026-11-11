/* LEVEL_17:0x1127F0 -- placement copy of LEVEL_16_113060.c: clears the global word and runs the six reset
   steps. */
extern int D_001A8234;
extern void func_112F70(void);
extern void func_114660(void);
extern void func_1159E0(void);
extern void func_116338(void);
extern void func_022680(void);
extern void func_0292F0(void);

void func_1127F0(void)
{
    D_001A8234 = 0;
    func_112F70();
    func_114660();
    func_1159E0();
    func_116338();
    func_022680();
    func_0292F0();
}
