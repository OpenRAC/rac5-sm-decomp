/* LEVEL_01:0x133D10 -- placement copy of FRONTEND_021668.c: clears a pending flag pair after one call, returns 1 if it was set. */
extern unsigned char D_00207088; extern int D_00207080; extern void func_1339C8(int);
int func_133D10(void)
{
    int *p = &D_00207080;
    if (D_00207088 != 0) {
        func_1339C8(1);
        D_00207088 = 0;
        *p = 0;
        return 1;
    }
    return 0;
}
