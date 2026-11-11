/* LEVEL_08:0x02C7E8 -- placement copy of LEVEL_01_02C070.c: clears four globals around one call, stores the call result. */
extern int D_00280BA0;
extern int D_00280BA4;
extern int D_00280BA8;
extern int D_00280BAC;
extern int D_00280BB0;
extern int D_00280BB4;
extern char D_0023D0B4;
extern int func_0AD2F8(void);

void func_02C7E8(void)
{
    D_00280BA0 = 0;
    D_00280BA4 = 0;
    D_00280BAC = 0;
    D_00280BB0 = 0;
    D_00280BA8 = func_0AD2F8();
    D_00280BB4 = 0;
    D_0023D0B4 = 0;
}
