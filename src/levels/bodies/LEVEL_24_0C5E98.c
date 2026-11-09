/* LEVEL_24:0x0C5E98 -- placement copy of LEVEL_01_0CC550.c: calls two helpers, stores one result, then calls a sink. */
extern int func_09FC58(int a0);
extern void func_0C5F18(void);
extern void func_1298D8(int a0, char *a1, int a2);
extern int D_001D28BC;
extern char D_001E4DF8[];

void func_0C5E98(void)
{
    int saved;

    saved = func_09FC58(0);
    D_001D28BC = func_09FC58(1);
    func_0C5F18();
    func_1298D8(0, D_001E4DF8, saved);
}
