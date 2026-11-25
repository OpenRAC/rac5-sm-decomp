/* LEVEL_07:0x0A9570 -- placement copy of LEVEL_01_0A7570.c: calls four helpers in order, passing one global pointer pair. */
extern void func_0A9318(void);
extern int func_0A9250(unsigned int, int);
extern int func_0A8CE8(void);
extern int func_0A86D0(unsigned int, unsigned int);
extern unsigned int D_0020ABE0;
extern unsigned int D_0020ABE4;

void func_0A9570(int value, int unused)
{
    (void)unused;
    func_0A9318();
    func_0A9250(D_0020ABE0, value);
    func_0A8CE8();
    func_0A86D0(D_0020ABE0, D_0020ABE4);
}
