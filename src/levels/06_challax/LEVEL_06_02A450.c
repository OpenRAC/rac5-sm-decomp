/* LEVEL_06:0x02A450 -- placement copy of LEVEL_01_02C070.c: clears four globals around one call, stores the call result. */
extern int D_0021E6A0;
extern int D_0021E6A4;
extern int D_0021E6A8;
extern int D_0021E6AC;
extern int D_0021E6B0;
extern int D_0021E6B4;
extern char D_001E3434;
extern int func_09D1D0(void);

void func_02A450(void)
{
    D_0021E6A0 = 0;
    D_0021E6A4 = 0;
    D_0021E6AC = 0;
    D_0021E6B0 = 0;
    D_0021E6A8 = func_09D1D0();
    D_0021E6B4 = 0;
    D_001E3434 = 0;
}
