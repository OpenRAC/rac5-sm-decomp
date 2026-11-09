/* LEVEL_22:0x0BAA98 -- placement copy of LEVEL_01_0CC550.c: calls two helpers, stores one result, then calls a sink. */
extern int func_0949F0(int a0);
extern void func_0BAB18(void);
extern void func_10B2A8(int a0, char *a1, int a2);
extern int D_00160FBC;
extern char D_001714F8[];

void func_0BAA98(void)
{
    int saved;

    saved = func_0949F0(0);
    D_00160FBC = func_0949F0(1);
    func_0BAB18();
    func_10B2A8(0, D_001714F8, saved);
}
