/* LEVEL_21:0x087E38 -- placement copy of LEVEL_01_0A7570.c: calls four helpers in order, passing one global pointer pair. */
extern void func_087BE0(void);
extern int func_087B18(unsigned int, int);
extern int func_0875B0(void);
extern int func_086F98(unsigned int, unsigned int);
extern unsigned int D_0014B560;
extern unsigned int D_0014B564;

void func_087E38(int value, int unused)
{
    (void)unused;
    func_087BE0();
    func_087B18(D_0014B560, value);
    func_0875B0();
    func_086F98(D_0014B560, D_0014B564);
}
