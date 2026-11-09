/* LEVEL_22:0x0B4F88 -- placement copy of LEVEL_01_0C6AD8.c: resets memory card state and runs the pending callback. */
extern void func_0B4510(void);
extern int func_10B440(void);
extern void func_094A58(void);
extern void func_0C5270(int a);
extern void MEMCARD_SetWriteHeaderOnlyMode__Fb(int b);
extern char D_00160040;
extern char D_0015FF30;
extern unsigned char D_0015FF31;
extern char D_0015FF32;
extern int D_0015FF34;
extern int D_0015FF38;
extern void (*D_0015FF3C)(void);
extern void (*D_0015FF40)(void);
extern int D_0015FF44;
void func_0B4F88(void)
{
    func_0B4510();
    func_10B440();
    func_094A58();
    func_0C5270(0);
    D_00160040 = 0;
    D_0015FF30 = 0;
    D_0015FF32 = 0;
    MEMCARD_SetWriteHeaderOnlyMode__Fb(0);
    D_0015FF34 = 0;
    D_0015FF38 = 0;
    if (D_0015FF31 != 0) {
        if (D_0015FF3C != 0)
            D_0015FF3C();
    } else {
        if (D_0015FF40 != 0)
            D_0015FF40();
    }
    D_0015FF31 = 0;
    D_0015FF3C = 0;
    D_0015FF40 = 0;
    D_0015FF44 = 0;
}
