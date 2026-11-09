/* LEVEL_08:0x0D74F8 -- placement copy of LEVEL_01_0CC550.c: calls two helpers, stores one result, then calls a sink. */
extern int func_0B0CD8(int a0);
extern void func_0D7578(void);
extern void func_145310(int a0, char *a1, int a2);
extern int D_0024AAFC;
extern char D_0025DCF8[];

void func_0D74F8(void)
{
    int saved;

    saved = func_0B0CD8(0);
    D_0024AAFC = func_0B0CD8(1);
    func_0D7578();
    func_145310(0, D_0025DCF8, saved);
}
