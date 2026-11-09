/* LEVEL_21:0x0ACB98 -- placement copy of LEVEL_01_0CC550.c: calls two helpers, stores one result, then calls a sink. */
extern int func_086CA8(int a0);
extern void func_0ACC18(void);
extern void func_0F2CA0(int a0, char *a1, int a2);
extern int D_001568BC;
extern char D_001687F8[];

void func_0ACB98(void)
{
    int saved;

    saved = func_086CA8(0);
    D_001568BC = func_086CA8(1);
    func_0ACC18();
    func_0F2CA0(0, D_001687F8, saved);
}
