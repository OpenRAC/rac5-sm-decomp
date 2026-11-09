/* LEVEL_05:0x0C5080 -- placement copy of LEVEL_01_0C6AD8.c: resets memory card state and runs the pending callback. */
extern void func_0C4608(void);
extern int func_12F8E8(void);
extern void func_0A4A08(void);
extern void func_0D52D8(int a);
extern void MEMCARD_SetWriteHeaderOnlyMode__Fb(int b);
extern char D_001F0040;
extern char D_001EFF30;
extern unsigned char D_001EFF31;
extern char D_001EFF32;
extern int D_001EFF34;
extern int D_001EFF38;
extern void (*D_001EFF3C)(void);
extern void (*D_001EFF40)(void);
extern int D_001EFF44;
void func_0C5080(void)
{
    func_0C4608();
    func_12F8E8();
    func_0A4A08();
    func_0D52D8(0);
    D_001F0040 = 0;
    D_001EFF30 = 0;
    D_001EFF32 = 0;
    MEMCARD_SetWriteHeaderOnlyMode__Fb(0);
    D_001EFF34 = 0;
    D_001EFF38 = 0;
    if (D_001EFF31 != 0) {
        if (D_001EFF3C != 0)
            D_001EFF3C();
    } else {
        if (D_001EFF40 != 0)
            D_001EFF40();
    }
    D_001EFF31 = 0;
    D_001EFF3C = 0;
    D_001EFF40 = 0;
    D_001EFF44 = 0;
}
