/* LEVEL_08:0x0D1A00 -- placement copy of LEVEL_01_0C6AD8.c: resets memory card state and runs the pending callback. */
extern void func_0D0F88(void);
extern int func_1454A8(void);
extern void func_0B0D40(void);
extern void func_0E1CF0(int a);
extern void MEMCARD_SetWriteHeaderOnlyMode__Fb(int b);
extern char D_00249B80;
extern char D_00249A70;
extern unsigned char D_00249A71;
extern char D_00249A72;
extern int D_00249A74;
extern int D_00249A78;
extern void (*D_00249A7C)(void);
extern void (*D_00249A80)(void);
extern int D_00249A84;
void func_0D1A00(void)
{
    func_0D0F88();
    func_1454A8();
    func_0B0D40();
    func_0E1CF0(0);
    D_00249B80 = 0;
    D_00249A70 = 0;
    D_00249A72 = 0;
    MEMCARD_SetWriteHeaderOnlyMode__Fb(0);
    D_00249A74 = 0;
    D_00249A78 = 0;
    if (D_00249A71 != 0) {
        if (D_00249A7C != 0)
            D_00249A7C();
    } else {
        if (D_00249A80 != 0)
            D_00249A80();
    }
    D_00249A71 = 0;
    D_00249A7C = 0;
    D_00249A80 = 0;
    D_00249A84 = 0;
}
