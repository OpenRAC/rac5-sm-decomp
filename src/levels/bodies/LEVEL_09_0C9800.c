/* LEVEL_09:0x0C9800 -- placement copy of LEVEL_01_0CC550.c: calls two helpers, stores one result, then calls a sink. */
extern int func_0A3690(int a0);
extern void func_0C9880(void);
extern void func_12CD70(int a0, char *a1, int a2);
extern int D_001EBA3C;
extern char D_001FDC78[];

void func_0C9800(void)
{
    int saved;

    saved = func_0A3690(0);
    D_001EBA3C = func_0A3690(1);
    func_0C9880();
    func_12CD70(0, D_001FDC78, saved);
}
