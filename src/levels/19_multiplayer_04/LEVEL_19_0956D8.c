/* LEVEL_19:0x0956D8 -- placement copy of LEVEL_01_0A7570.c: calls four helpers in order, passing one global pointer pair. */
extern void func_095480(void);
extern int func_095440(void);
extern int func_0953D0(void);
extern int func_095190(void);
extern unsigned int D_001A5A30;
extern unsigned int D_001A5A34;

void func_0956D8(int value, int unused)
{
    (void)unused;
    func_095480();
    ((int (*)(unsigned int, int))func_095440)(D_001A5A30, value);
    func_0953D0();
    ((int (*)(unsigned int, unsigned int))func_095190)(D_001A5A30, D_001A5A34);
}
