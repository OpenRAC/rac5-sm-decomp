/* LEVEL_21:0x0F2BD8 -- placement copy of FRONTEND_021668.c: clears a pending flag pair after one call, returns 1 if it was set. */
extern unsigned char D_0015B9E8; extern int D_0015B9E0; extern void func_0F2890(int);
int func_0F2BD8(void)
{
    int *p = &D_0015B9E0;
    if (D_0015B9E8 != 0) {
        func_0F2890(1);
        D_0015B9E8 = 0;
        *p = 0;
        return 1;
    }
    return 0;
}
