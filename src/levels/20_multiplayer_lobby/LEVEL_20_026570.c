/* LEVEL_20:0x026570 -- placement copy of LEVEL_01_02C070.c: clears four globals around one call, stores the call result. */
extern int D_00137FA0;
extern int D_00137FA4;
extern int D_00137FA8;
extern int D_00137FAC;
extern int D_00137FB0;
extern int D_00137FB4;
extern char D_00104744;
extern int func_07C358(void);

void func_026570(void)
{
    D_00137FA0 = 0;
    D_00137FA4 = 0;
    D_00137FAC = 0;
    D_00137FB0 = 0;
    D_00137FA8 = func_07C358();
    D_00137FB4 = 0;
    D_00104744 = 0;
}
