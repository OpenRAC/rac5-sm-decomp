/* LEVEL_03:0x0CC338 -- placement copy of LEVEL_01_0CC550.c: calls two helpers, stores one result, then calls a sink. */
extern int func_0A6160(int a0);
extern void func_0CC3B8(void);
extern void func_1321A0(int a0, char *a1, int a2);
extern int D_0021A2BC;
extern char D_0022CF78[];

void func_0CC338(void)
{
    int saved;

    saved = func_0A6160(0);
    D_0021A2BC = func_0A6160(1);
    func_0CC3B8();
    func_1321A0(0, D_0022CF78, saved);
}
