/* LEVEL_16:0x095E48 -- placement copy of LEVEL_01_0A7570.c: calls four helpers in order, passing one global pointer pair. */
extern void func_095BF0(void);
extern int func_095BB0(unsigned int, int);
extern int func_095B40(void);
extern int func_095900(void);
extern unsigned int D_001A48B0;
extern unsigned int D_001A48B4;

void func_095E48(int value, int unused)
{
    (void)unused;
    func_095BF0();
    func_095BB0(D_001A48B0, value);
    func_095B40();
    ((int (*)(unsigned int, unsigned int))func_095900)(D_001A48B0, D_001A48B4);
}
