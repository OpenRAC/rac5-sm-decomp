/* LEVEL_18:0x0BAC28 -- placement copy of LEVEL_16_0BBC50.c: placement copy of LEVEL_01_0CC550.c: calls two helpers, stores one result, then calls a sink. */
extern int func_0946D0(void);
extern void func_0BACA8(void);
extern void func_10F7F8(int a0, char *a1, int a2);
extern int D_001B0F6C;
extern char D_001CA4B8[];

void func_0BAC28(void)
{
    int saved;

    saved = ((int (*)(int))func_0946D0)(0);
    D_001B0F6C = ((int (*)(int))func_0946D0)(1);
    func_0BACA8();
    func_10F7F8(0, D_001CA4B8, saved);
}
