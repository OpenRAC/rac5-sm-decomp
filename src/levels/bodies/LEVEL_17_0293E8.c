/* LEVEL_17:0x0293E8 -- placement copy of LEVEL_01_02C070.c: clears four globals around one call, stores the call result. */
extern int D_001D1920;
extern int D_001D1924;
extern int D_001D1928;
extern int D_001D192C;
extern int D_001D1930;
extern int D_001D1934;
extern char D_00195664;
extern int func_091158(void);

void func_0293E8(void)
{
    D_001D1920 = 0;
    D_001D1924 = 0;
    D_001D192C = 0;
    D_001D1930 = 0;
    D_001D1928 = func_091158();
    D_001D1934 = 0;
    D_00195664 = 0;
}
