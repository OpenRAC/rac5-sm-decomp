/* LEVEL_02:0x13A0C0 -- placement copy of FRONTEND_021668.c: clears a pending flag pair after one call, returns 1 if it was set. */
extern unsigned char D_0021C048; extern int D_0021C040; extern void func_139D78(int);
int func_13A0C0(void)
{
    int *p = &D_0021C040;
    if (D_0021C048 != 0) {
        func_139D78(1);
        D_0021C048 = 0;
        *p = 0;
        return 1;
    }
    return 0;
}
