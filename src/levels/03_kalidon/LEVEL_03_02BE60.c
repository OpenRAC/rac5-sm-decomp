/* LEVEL_03:0x02BE60 -- placement copy of LEVEL_01_02C070.c: clears four globals around one call, stores the call result. */
extern int D_0024C7A0;
extern int D_0024C7A4;
extern int D_0024C7A8;
extern int D_0024C7AC;
extern int D_0024C7B0;
extern int D_0024C7B4;
extern char D_0020CBB4;
extern int func_0A2780(void);

void func_02BE60(void)
{
    D_0024C7A0 = 0;
    D_0024C7A4 = 0;
    D_0024C7AC = 0;
    D_0024C7B0 = 0;
    D_0024C7A8 = func_0A2780();
    D_0024C7B4 = 0;
    D_0020CBB4 = 0;
}
