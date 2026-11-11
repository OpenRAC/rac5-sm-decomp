/* LEVEL_18:0x111E18 -- placement copy of LEVEL_16_113060.c: clears the global word and runs the six reset
   steps. */
extern int D_001B60B4;
extern void func_112598(void);
extern void func_113C88(void);
extern void func_115028(void);
extern void func_1159B0(void);
extern void func_022348(void);
extern void func_028F20(void);

void func_111E18(void)
{
    D_001B60B4 = 0;
    func_112598();
    func_113C88();
    func_115028();
    func_1159B0();
    func_022348();
    func_028F20();
}
