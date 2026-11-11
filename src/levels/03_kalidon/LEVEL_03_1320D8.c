/* LEVEL_03:0x1320D8 -- placement copy of FRONTEND_021668.c: clears a pending flag pair after one call, returns 1 if it was set. */
extern unsigned char D_0021F708; extern int D_0021F700; extern void func_131D90(int);
int func_1320D8(void)
{
    int *p = &D_0021F700;
    if (D_0021F708 != 0) {
        func_131D90(1);
        D_0021F708 = 0;
        *p = 0;
        return 1;
    }
    return 0;
}
