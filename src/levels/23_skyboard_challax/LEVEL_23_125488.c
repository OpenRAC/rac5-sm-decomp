/* LEVEL_23:0x125488 -- placement copy of FRONTEND_021668.c: clears a pending flag pair after one call, returns 1 if it was set. */
extern unsigned char D_001DA488; extern int D_001DA480; extern void func_125140(int);
int func_125488(void)
{
    int *p = &D_001DA480;
    if (D_001DA488 != 0) {
        func_125140(1);
        D_001DA488 = 0;
        *p = 0;
        return 1;
    }
    return 0;
}
