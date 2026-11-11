/* LEVEL_10:0x131B90 -- placement copy of FRONTEND_021668.c: clears a pending flag pair after one call, returns 1 if it was set. */
extern unsigned char D_0020FCE8; extern int D_0020FCE0; extern void func_131848(int);
int func_131B90(void)
{
    int *p = &D_0020FCE0;
    if (D_0020FCE8 != 0) {
        func_131848(1);
        D_0020FCE8 = 0;
        *p = 0;
        return 1;
    }
    return 0;
}
