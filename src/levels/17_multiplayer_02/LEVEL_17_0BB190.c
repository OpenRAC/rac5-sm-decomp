/* LEVEL_17:0x0BB190 -- placement copy of LEVEL_16_0BBC50.c: placement copy of LEVEL_01_0CC550.c: calls two helpers, stores one result, then calls a sink. */
extern int func_094BB8(void);
extern void func_0BB210(void);
extern void func_1100C0(int a0, char *a1, int a2);
extern int D_001A30EC;
extern char D_001BC3B8[];

void func_0BB190(void)
{
    int saved;

    saved = ((int (*)(int))func_094BB8)(0);
    D_001A30EC = ((int (*)(int))func_094BB8)(1);
    func_0BB210();
    func_1100C0(0, D_001BC3B8, saved);
}
