/* LEVEL_04:0x02BD10 -- placement copy of LEVEL_01_02C070.c: clears four globals around one call, stores the call result. */
extern int D_0024C120;
extern int D_0024C124;
extern int D_0024C128;
extern int D_0024C12C;
extern int D_0024C130;
extern int D_0024C134;
extern char D_0020D6B4;
extern int func_0A7C10(void);

void func_02BD10(void)
{
    D_0024C120 = 0;
    D_0024C124 = 0;
    D_0024C12C = 0;
    D_0024C130 = 0;
    D_0024C128 = func_0A7C10();
    D_0024C134 = 0;
    D_0020D6B4 = 0;
}
