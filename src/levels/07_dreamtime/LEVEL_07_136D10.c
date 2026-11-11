/* LEVEL_07:0x136D10 -- placement copy of FRONTEND_021668.c: clears a pending flag pair after one call, returns 1 if it was set. */
extern unsigned char D_0021B388; extern int D_0021B380; extern void func_1369C8(int);
int func_136D10(void)
{
    int *p = &D_0021B380;
    if (D_0021B388 != 0) {
        func_1369C8(1);
        D_0021B388 = 0;
        *p = 0;
        return 1;
    }
    return 0;
}
