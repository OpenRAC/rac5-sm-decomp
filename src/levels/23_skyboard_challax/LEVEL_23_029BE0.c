/* LEVEL_23:0x029BE0 -- placement copy of LEVEL_01_02C070.c: clears four globals around one call, stores the call result. */
extern int D_001FEDA0;
extern int D_001FEDA4;
extern int D_001FEDA8;
extern int D_001FEDAC;
extern int D_001FEDB0;
extern int D_001FEDB4;
extern char D_001C7934;
extern int func_099740(void);

void func_029BE0(void)
{
    D_001FEDA0 = 0;
    D_001FEDA4 = 0;
    D_001FEDAC = 0;
    D_001FEDB0 = 0;
    D_001FEDA8 = func_099740();
    D_001FEDB4 = 0;
    D_001C7934 = 0;
}
