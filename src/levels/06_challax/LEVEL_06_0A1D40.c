/* LEVEL_06:0x0A1D40 -- placement copy of LEVEL_01_0A7570.c: calls four helpers in order, passing one global pointer pair. */
extern void func_0A1AE8(void);
extern int func_0A1A20(unsigned int, int);
extern int func_0A14B8(void);
extern int func_0A0EA0(unsigned int, unsigned int);
extern unsigned int D_001E57E0;
extern unsigned int D_001E57E4;

void func_0A1D40(int value, int unused)
{
    (void)unused;
    func_0A1AE8();
    func_0A1A20(D_001E57E0, value);
    func_0A14B8();
    func_0A0EA0(D_001E57E0, D_001E57E4);
}
