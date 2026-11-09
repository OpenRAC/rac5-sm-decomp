/* LEVEL_15:0x0A7120 -- placement copy of LEVEL_01_0C6AD8.c: resets memory card state and runs the pending callback. */
extern void func_0A66A8(void);
extern int func_0F2E38(void);
extern void func_086D10(void);
extern void func_0B7370(int a);
extern void MEMCARD_SetWriteHeaderOnlyMode__Fb(int b);
extern char D_00155940;
extern char D_00155830;
extern unsigned char D_00155831;
extern char D_00155832;
extern int D_00155834;
extern int D_00155838;
extern void (*D_0015583C)(void);
extern void (*D_00155840)(void);
extern int D_00155844;
void func_0A7120(void)
{
    func_0A66A8();
    func_0F2E38();
    func_086D10();
    func_0B7370(0);
    D_00155940 = 0;
    D_00155830 = 0;
    D_00155832 = 0;
    MEMCARD_SetWriteHeaderOnlyMode__Fb(0);
    D_00155834 = 0;
    D_00155838 = 0;
    if (D_00155831 != 0) {
        if (D_0015583C != 0)
            D_0015583C();
    } else {
        if (D_00155840 != 0)
            D_00155840();
    }
    D_00155831 = 0;
    D_0015583C = 0;
    D_00155840 = 0;
    D_00155844 = 0;
}
