/* LEVEL_19:0x111120 -- placement copy of FRONTEND_021668.c: clears a pending flag pair after one call, returns 1 if it was set. */
extern unsigned char D_001B5D18; extern int D_001B5D10; extern void func_110DD8(int);
int func_111120(void)
{
    int *p = &D_001B5D10;
    if (D_001B5D18 != 0) {
        func_110DD8(1);
        D_001B5D18 = 0;
        *p = 0;
        return 1;
    }
    return 0;
}
