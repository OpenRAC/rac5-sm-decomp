/* LEVEL_24:0x0295B0 -- placement copy of LEVEL_01_02C070.c: clears four globals around one call, stores the call result. */
extern int D_001FD820;
extern int D_001FD824;
extern int D_001FD828;
extern int D_001FD82C;
extern int D_001FD830;
extern int D_001FD834;
extern char D_001C51B4;
extern int func_09C278(void);

void func_0295B0(void)
{
    D_001FD820 = 0;
    D_001FD824 = 0;
    D_001FD82C = 0;
    D_001FD830 = 0;
    D_001FD828 = func_09C278();
    D_001FD834 = 0;
    D_001C51B4 = 0;
}
