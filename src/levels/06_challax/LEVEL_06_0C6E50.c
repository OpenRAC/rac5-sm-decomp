/* LEVEL_06:0x0C6E50 -- placement copy of LEVEL_01_0CC550.c: calls two helpers, stores one result, then calls a sink. */
extern int func_0A0BB0(int a0);
extern void func_0C6ED0(void);
extern void func_12A4A8(int a0, char *a1, int a2);
extern int D_001F0B3C;
extern char D_00202EF8[];

void func_0C6E50(void)
{
    int saved;

    saved = func_0A0BB0(0);
    D_001F0B3C = func_0A0BB0(1);
    func_0C6ED0();
    func_12A4A8(0, D_00202EF8, saved);
}
