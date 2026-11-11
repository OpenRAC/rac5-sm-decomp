/* LEVEL_01:0x02C070 -- clears four globals around one call, stores the call result. */
extern int D_00231920;
extern int D_00231924;
extern int D_00231928;
extern int D_0023192C;
extern int D_00231930;
extern int D_00231934;
extern char D_001F4534;
extern int func_0A2A00(void);

void func_02C070(void)
{
    D_00231920 = 0;
    D_00231924 = 0;
    D_0023192C = 0;
    D_00231930 = 0;
    D_00231928 = func_0A2A00();
    D_00231934 = 0;
    D_001F4534 = 0;
}
