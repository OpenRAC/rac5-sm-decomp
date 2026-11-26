/* LEVEL_02:0x0ADE80 -- placement copy of LEVEL_01_0A7570.c: calls four helpers in order, passing one global pointer pair. */
extern void func_0ADC28(void);
extern int func_0ADB60(unsigned int, int);
extern int func_0AD5F8(void);
extern int func_0ACFE0(unsigned int, unsigned int);
extern unsigned int D_0020B8A0;
extern unsigned int D_0020B8A4;

void func_0ADE80(int value, int unused)
{
    (void)unused;
    func_0ADC28();
    func_0ADB60(D_0020B8A0, value);
    func_0AD5F8();
    func_0ACFE0(D_0020B8A0, D_0020B8A4);
}
