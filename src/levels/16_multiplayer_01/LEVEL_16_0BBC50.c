/* LEVEL_16:0x0BBC50 -- placement copy of LEVEL_01_0CC550.c: calls two helpers, stores one result, then calls a sink. */
extern int func_0956C0(void);
extern void func_0BBCD0(void);
extern void func_110B48(int a0, char *a1, int a2);
extern int D_001AFAEC;
extern char D_001C8F38[];

void func_0BBC50(void)
{
    int saved;

    saved = ((int (*)(int))func_0956C0)(0);
    D_001AFAEC = ((int (*)(int))func_0956C0)(1);
    func_0BBCD0();
    func_110B48(0, D_001C8F38, saved);
}
