/* LEVEL_10:0x0CD990 -- placement copy of LEVEL_01_0CC550.c: calls two helpers, stores one result, then calls a sink. */
extern int func_0A74F8(int a0);
extern void func_0CDA10(void);
extern void func_131C58(int a0, char *a1, int a2);
extern int D_0020AC3C;
extern char D_0021CFF8[];

void func_0CD990(void)
{
    int saved;

    saved = func_0A74F8(0);
    D_0020AC3C = func_0A74F8(1);
    func_0CDA10();
    func_131C58(0, D_0021CFF8, saved);
}
