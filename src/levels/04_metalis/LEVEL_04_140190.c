/* LEVEL_04:0x140190 -- placement copy of FRONTEND_021668.c: clears a pending flag pair after one call, returns 1 if it was set. */
extern unsigned char D_002204A8; extern int D_002204A0; extern void func_13FE48(int);
int func_140190(void)
{
    int *p = &D_002204A0;
    if (D_002204A8 != 0) {
        func_13FE48(1);
        D_002204A8 = 0;
        *p = 0;
        return 1;
    }
    return 0;
}
