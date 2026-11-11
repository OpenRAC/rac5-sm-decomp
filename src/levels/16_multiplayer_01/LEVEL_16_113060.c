/* LEVEL_16:0x113060 -- clears the global word and runs the six reset
   steps. */
extern int D_001B4C34;
extern void func_1137E0(void);
extern void func_114ED0(void);
extern void func_116280(void);
extern void func_116BF0(void);
extern void func_022D00(void);
extern void func_029970(void);

void func_113060(void)
{
    D_001B4C34 = 0;
    func_1137E0();
    func_114ED0();
    func_116280();
    func_116BF0();
    func_022D00();
    func_029970();
}
