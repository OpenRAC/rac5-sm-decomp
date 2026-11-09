/* LEVEL_02:0x0D2EE0 -- placement copy of LEVEL_01_0CC550.c: calls two helpers, stores one result, then calls a sink. */
extern int func_0ACCF0(int a0);
extern void func_0D2F60(void);
extern void func_13A188(int a0, char *a1, int a2);
extern int D_00216BFC;
extern char D_00228FF8[];

void func_0D2EE0(void)
{
    int saved;

    saved = func_0ACCF0(0);
    D_00216BFC = func_0ACCF0(1);
    func_0D2F60();
    func_13A188(0, D_00228FF8, saved);
}
