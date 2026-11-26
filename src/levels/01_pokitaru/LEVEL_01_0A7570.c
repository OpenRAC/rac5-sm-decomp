/* LEVEL_01:0x0A7570 -- calls four helpers in order, passing one global pointer pair. */
extern void func_0A7318(void);
extern int func_0A7250(unsigned int, int);
extern int func_0A6CE8(void);
extern int func_0A66D0(unsigned int, unsigned int);
extern unsigned int D_001F68E0;
extern unsigned int D_001F68E4;

void func_0A7570(int value, int unused)
{
    (void)unused;
    func_0A7318();
    func_0A7250(D_001F68E0, value);
    func_0A6CE8();
    func_0A66D0(D_001F68E0, D_001F68E4);
}
