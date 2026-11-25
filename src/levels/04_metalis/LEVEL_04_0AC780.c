/* LEVEL_04:0x0AC780 -- placement copy of LEVEL_01_0A7570.c: calls four helpers in order, passing one global pointer pair. */
extern void func_0AC528(void);
extern int func_0AC460(unsigned int, int);
extern int func_0ABEF8(void);
extern int func_0AB8E0(unsigned int, unsigned int);
extern unsigned int D_0020FDA0;
extern unsigned int D_0020FDA4;

void func_0AC780(int value, int unused)
{
    (void)unused;
    func_0AC528();
    func_0AC460(D_0020FDA0, value);
    func_0ABEF8();
    func_0AB8E0(D_0020FDA0, D_0020FDA4);
}
