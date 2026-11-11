/* LEVEL_06:0x0C13D8 -- placement copy of LEVEL_01_0C6AD8.c: resets memory card state and runs the pending callback. */
extern void func_0C0960(void);
extern int func_12A640(void);
extern void func_0A0C18(void);
extern void func_0D1630(int a);
extern void MEMCARD_SetWriteHeaderOnlyMode__Fb(int b);
extern char D_001EFBC0;
extern char D_001EFAB0;
extern unsigned char D_001EFAB1;
extern char D_001EFAB2;
extern int D_001EFAB4;
extern int D_001EFAB8;
extern void (*D_001EFABC)(void);
extern void (*D_001EFAC0)(void);
extern int D_001EFAC4;
void func_0C13D8(void)
{
    func_0C0960();
    func_12A640();
    func_0A0C18();
    func_0D1630(0);
    D_001EFBC0 = 0;
    D_001EFAB0 = 0;
    D_001EFAB2 = 0;
    MEMCARD_SetWriteHeaderOnlyMode__Fb(0);
    D_001EFAB4 = 0;
    D_001EFAB8 = 0;
    if (D_001EFAB1 != 0) {
        if (D_001EFABC != 0)
            D_001EFABC();
    } else {
        if (D_001EFAC0 != 0)
            D_001EFAC0();
    }
    D_001EFAB1 = 0;
    D_001EFABC = 0;
    D_001EFAC0 = 0;
    D_001EFAC4 = 0;
}
