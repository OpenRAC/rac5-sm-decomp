/* LEVEL_02:0x02C830 -- placement copy of LEVEL_01_02C070.c: clears four globals around one call, stores the call result. */
extern int D_00248E20;
extern int D_00248E24;
extern int D_00248E28;
extern int D_00248E2C;
extern int D_00248E30;
extern int D_00248E34;
extern char D_002091B4;
extern int func_0A9310(void);

void func_02C830(void)
{
    D_00248E20 = 0;
    D_00248E24 = 0;
    D_00248E2C = 0;
    D_00248E30 = 0;
    D_00248E28 = func_0A9310();
    D_00248E34 = 0;
    D_002091B4 = 0;
}
