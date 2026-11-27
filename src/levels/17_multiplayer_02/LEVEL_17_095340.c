/* LEVEL_17:0x095340 -- placement copy of LEVEL_01_0A7570.c: calls four helpers in order, passing one global pointer pair. */
extern void func_0950E8(void);
extern int func_0950A8(void);
extern int func_095038(void);
extern int func_094DF8(void);
extern unsigned int D_00197EB0;
extern unsigned int D_00197EB4;

void func_095340(int value, int unused)
{
    (void)unused;
    func_0950E8();
    ((int (*)(unsigned int, int))func_0950A8)(D_00197EB0, value);
    func_095038();
    ((int (*)(unsigned int, unsigned int))func_094DF8)(D_00197EB0, D_00197EB4);
}
