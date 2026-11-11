/* LEVEL_09:0x0C3D88 -- placement copy of LEVEL_01_0C6AD8.c: resets memory card state and runs the pending callback. */
extern void func_0C3310(void);
extern int func_12CF08(void);
extern void func_0A36F8(void);
extern void func_0D3FE0(int a);
extern void MEMCARD_SetWriteHeaderOnlyMode__Fb(int b);
extern char D_001EAAC0;
extern char D_001EA9B0;
extern unsigned char D_001EA9B1;
extern char D_001EA9B2;
extern int D_001EA9B4;
extern int D_001EA9B8;
extern void (*D_001EA9BC)(void);
extern void (*D_001EA9C0)(void);
extern int D_001EA9C4;
void func_0C3D88(void)
{
    func_0C3310();
    func_12CF08();
    func_0A36F8();
    func_0D3FE0(0);
    D_001EAAC0 = 0;
    D_001EA9B0 = 0;
    D_001EA9B2 = 0;
    MEMCARD_SetWriteHeaderOnlyMode__Fb(0);
    D_001EA9B4 = 0;
    D_001EA9B8 = 0;
    if (D_001EA9B1 != 0) {
        if (D_001EA9BC != 0)
            D_001EA9BC();
    } else {
        if (D_001EA9C0 != 0)
            D_001EA9C0();
    }
    D_001EA9B1 = 0;
    D_001EA9BC = 0;
    D_001EA9C0 = 0;
    D_001EA9C4 = 0;
}
