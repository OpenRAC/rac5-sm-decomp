/* LEVEL_17:0x10FFF8 -- placement copy of FRONTEND_021668.c: clears a pending flag pair after one call, returns 1 if it was set. */
extern unsigned char D_001A8198; extern int D_001A8190; extern void func_10FCB0(int);
int func_10FFF8(void)
{
    int *p = &D_001A8190;
    if (D_001A8198 != 0) {
        func_10FCB0(1);
        D_001A8198 = 0;
        *p = 0;
        return 1;
    }
    return 0;
}
