/* LEVEL_18:0x094E58 -- placement copy of LEVEL_01_0A7570.c: calls four helpers in order, passing one global pointer pair. */
extern void func_094C00(void);
extern int func_094BC0(void);
extern int func_094B50(void);
extern int func_094910(void);
extern unsigned int D_001A5D30;
extern unsigned int D_001A5D34;

void func_094E58(int value, int unused)
{
    (void)unused;
    func_094C00();
    ((int (*)(unsigned int, int))func_094BC0)(D_001A5D30, value);
    func_094B50();
    ((int (*)(unsigned int, unsigned int))func_094910)(D_001A5D30, D_001A5D34);
}
