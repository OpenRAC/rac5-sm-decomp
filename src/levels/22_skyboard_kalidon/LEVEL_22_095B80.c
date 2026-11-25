/* LEVEL_22:0x095B80 -- placement copy of LEVEL_01_0A7570.c: calls four helpers in order, passing one global pointer pair. */
extern void func_095928(void);
extern int func_095860(unsigned int, int);
extern int func_0952F8(void);
extern int func_094CE0(unsigned int, unsigned int);
extern unsigned int D_00155C60;
extern unsigned int D_00155C64;

void func_095B80(int value, int unused)
{
    (void)unused;
    func_095928();
    func_095860(D_00155C60, value);
    func_0952F8();
    func_094CE0(D_00155C60, D_00155C64);
}
