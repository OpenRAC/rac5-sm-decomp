/* LEVEL_09:0x0A4820 -- placement copy of LEVEL_01_0A7570.c: calls four helpers in order, passing one global pointer pair. */
extern void func_0A45C8(void);
extern int func_0A4500(unsigned int, int);
extern int func_0A3F98(void);
extern int func_0A3980(unsigned int, unsigned int);
extern unsigned int D_001E06E0;
extern unsigned int D_001E06E4;

void func_0A4820(int value, int unused)
{
    (void)unused;
    func_0A45C8();
    func_0A4500(D_001E06E0, value);
    func_0A3F98();
    func_0A3980(D_001E06E0, D_001E06E4);
}
