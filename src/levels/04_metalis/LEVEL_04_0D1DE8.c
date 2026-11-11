/* LEVEL_04:0x0D1DE8 -- placement copy of LEVEL_01_0CC550.c: calls two helpers, stores one result, then calls a sink. */
extern int func_0AB5F0(int a0);
extern void func_0D1E68(void);
extern void func_140258(int a0, char *a1, int a2);
extern int D_0021B0FC;
extern char D_0022D9F8[];

void func_0D1DE8(void)
{
    int saved;

    saved = func_0AB5F0(0);
    D_0021B0FC = func_0AB5F0(1);
    func_0D1E68();
    func_140258(0, D_0022D9F8, saved);
}
