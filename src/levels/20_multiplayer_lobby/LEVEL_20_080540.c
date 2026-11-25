/* LEVEL_20:0x080540 -- placement copy of LEVEL_01_0A7570.c: calls four helpers in order, passing one global pointer pair. */
extern void func_0802E8(void);
extern int func_0802A8(unsigned int, int);
extern int func_080238(void);
extern int func_07FFF8(void);
extern unsigned int D_00106F90;
extern unsigned int D_00106F94;

void func_080540(int value, int unused)
{
    (void)unused;
    func_0802E8();
    func_0802A8(D_00106F90, value);
    func_080238();
    ((int (*)(unsigned int, unsigned int))func_07FFF8)(D_00106F90, D_00106F94);
}
