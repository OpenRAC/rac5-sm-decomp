/* LEVEL_01:0x0CC550 -- calls two helpers, stores one result, then calls a sink. */
extern int func_0A63E0(int a0);
extern void func_0CC5D0(void);
extern void func_133DD8(int a0, char *a1, int a2);
extern int D_00201C3C;
extern char D_00214078[];

void func_0CC550(void)
{
    int saved;

    saved = func_0A63E0(0);
    D_00201C3C = func_0A63E0(1);
    func_0CC5D0();
    func_133DD8(0, D_00214078, saved);
}
