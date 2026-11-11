/* LEVEL_24:0x0C03A0 -- placement copy of LEVEL_01_0C6AD8.c: resets memory card state and runs the pending callback. */
extern void func_0BF928(void);
extern int func_129A70(void);
extern void func_09FCC0(void);
extern void func_0D0688(int a);
extern void MEMCARD_SetWriteHeaderOnlyMode__Fb(int b);
extern char D_001D1940;
extern char D_001D1830;
extern unsigned char D_001D1831;
extern char D_001D1832;
extern int D_001D1834;
extern int D_001D1838;
extern void (*D_001D183C)(void);
extern void (*D_001D1840)(void);
extern int D_001D1844;
void func_0C03A0(void)
{
    func_0BF928();
    func_129A70();
    func_09FCC0();
    func_0D0688(0);
    D_001D1940 = 0;
    D_001D1830 = 0;
    D_001D1832 = 0;
    MEMCARD_SetWriteHeaderOnlyMode__Fb(0);
    D_001D1834 = 0;
    D_001D1838 = 0;
    if (D_001D1831 != 0) {
        if (D_001D183C != 0)
            D_001D183C();
    } else {
        if (D_001D1840 != 0)
            D_001D1840();
    }
    D_001D1831 = 0;
    D_001D183C = 0;
    D_001D1840 = 0;
    D_001D1844 = 0;
}
