/* LEVEL_19:0x113808 -- placement copy of LEVEL_16_113060.c: clears the global word and runs the six reset
   steps. */
extern int D_001B5DB4;
extern void func_113F88(void);
extern void func_115678(void);
extern void func_1169F8(void);
extern void func_117350(void);
extern void func_022940(void);
extern void func_029718(void);

void func_113808(void)
{
    D_001B5DB4 = 0;
    func_113F88();
    func_115678();
    func_1169F8();
    func_117350();
    func_022940();
    func_029718();
}
