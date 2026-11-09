/* LEVEL_23:0x0C3388 -- placement copy of LEVEL_01_0CC550.c: calls two helpers, stores one result, then calls a sink. */
extern int func_09D150(int a0);
extern void func_0C3408(void);
extern void func_125550(int a0, char *a1, int a2);
extern int D_001D503C;
extern char D_001E71F8[];

void func_0C3388(void)
{
    int saved;

    saved = func_09D150(0);
    D_001D503C = func_09D150(1);
    func_0C3408();
    func_125550(0, D_001E71F8, saved);
}
