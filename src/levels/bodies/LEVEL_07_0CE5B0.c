/* LEVEL_07:0x0CE5B0 -- placement copy of LEVEL_01_0CC550.c: calls two helpers, stores one result, then calls a sink. */
extern int func_0A83E0(int a0);
extern void func_0CE630(void);
extern void func_136DD8(int a0, char *a1, int a2);
extern int D_00215F3C;
extern char D_00228D78[];

void func_0CE5B0(void)
{
    int saved;

    saved = func_0A83E0(0);
    D_00215F3C = func_0A83E0(1);
    func_0CE630();
    func_136DD8(0, D_00228D78, saved);
}
