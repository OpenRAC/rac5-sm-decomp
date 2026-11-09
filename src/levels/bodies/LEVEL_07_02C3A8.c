/* LEVEL_07:0x02C3A8 -- placement copy of LEVEL_01_02C070.c: clears four globals around one call, stores the call result. */
extern int D_00247220;
extern int D_00247224;
extern int D_00247228;
extern int D_0024722C;
extern int D_00247230;
extern int D_00247234;
extern char D_00208834;
extern int func_0A4A00(void);

void func_02C3A8(void)
{
    D_00247220 = 0;
    D_00247224 = 0;
    D_0024722C = 0;
    D_00247230 = 0;
    D_00247228 = func_0A4A00();
    D_00247234 = 0;
    D_00208834 = 0;
}
