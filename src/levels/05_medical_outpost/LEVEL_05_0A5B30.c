/* LEVEL_05:0x0A5B30 -- placement copy of LEVEL_01_0A7570.c: calls four helpers in order, passing one global pointer pair. */
extern void func_0A58D8(void);
extern int func_0A5810(unsigned int, int);
extern int func_0A52A8(void);
extern int func_0A4C90(unsigned int, unsigned int);
extern unsigned int D_001E5C60;
extern unsigned int D_001E5C64;

void func_0A5B30(int value, int unused)
{
    (void)unused;
    func_0A58D8();
    func_0A5810(D_001E5C60, value);
    func_0A52A8();
    func_0A4C90(D_001E5C60, D_001E5C64);
}
