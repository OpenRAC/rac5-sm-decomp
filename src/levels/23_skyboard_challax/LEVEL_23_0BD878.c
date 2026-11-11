/* LEVEL_23:0x0BD878 -- placement copy of LEVEL_01_0C6AD8.c: resets memory card state and runs the pending callback. */
extern void func_0BCE00(void);
extern int func_1256E8(void);
extern void func_09D1B8(void);
extern void func_0CDB60(int a);
extern void MEMCARD_SetWriteHeaderOnlyMode__Fb(int b);
extern char D_001D40C0;
extern char D_001D3FB0;
extern unsigned char D_001D3FB1;
extern char D_001D3FB2;
extern int D_001D3FB4;
extern int D_001D3FB8;
extern void (*D_001D3FBC)(void);
extern void (*D_001D3FC0)(void);
extern int D_001D3FC4;
void func_0BD878(void)
{
    func_0BCE00();
    func_1256E8();
    func_09D1B8();
    func_0CDB60(0);
    D_001D40C0 = 0;
    D_001D3FB0 = 0;
    D_001D3FB2 = 0;
    MEMCARD_SetWriteHeaderOnlyMode__Fb(0);
    D_001D3FB4 = 0;
    D_001D3FB8 = 0;
    if (D_001D3FB1 != 0) {
        if (D_001D3FBC != 0)
            D_001D3FBC();
    } else {
        if (D_001D3FC0 != 0)
            D_001D3FC0();
    }
    D_001D3FB1 = 0;
    D_001D3FBC = 0;
    D_001D3FC0 = 0;
    D_001D3FC4 = 0;
}
