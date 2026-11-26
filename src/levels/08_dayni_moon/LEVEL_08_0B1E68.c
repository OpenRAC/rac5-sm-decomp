/* LEVEL_08:0x0B1E68 -- placement copy of LEVEL_01_0A7570.c: calls four helpers in order, passing one global pointer pair. */
extern void func_0B1C10(void);
extern int func_0B1B48(unsigned int, int);
extern int func_0B15E0(void);
extern int func_0B0FC8(unsigned int, unsigned int);
extern unsigned int D_0023F7A0;
extern unsigned int D_0023F7A4;

void func_0B1E68(int value, int unused)
{
    (void)unused;
    func_0B1C10();
    func_0B1B48(D_0023F7A0, value);
    func_0B15E0();
    func_0B0FC8(D_0023F7A0, D_0023F7A4);
}
