/* LEVEL_10:0x0A8688 -- placement copy of LEVEL_01_0A7570.c: calls four helpers in order, passing one global pointer pair. */
extern void func_0A8430(void);
extern int func_0A8368(unsigned int, int);
extern int func_0A7E00(void);
extern int func_0A77E8(unsigned int, unsigned int);
extern unsigned int D_001FF8E0;
extern unsigned int D_001FF8E4;

void func_0A8688(int value, int unused)
{
    (void)unused;
    func_0A8430();
    func_0A8368(D_001FF8E0, value);
    func_0A7E00();
    func_0A77E8(D_001FF8E0, D_001FF8E4);
}
