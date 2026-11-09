/* LEVEL_08:0x145248 -- placement copy of FRONTEND_021668.c: clears a pending flag pair after one call, returns 1 if it was set. */
extern unsigned char D_0024FF48; extern int D_0024FF40; extern void func_144F00(int);
int func_145248(void)
{
    int *p = &D_0024FF40;
    if (D_0024FF48 != 0) {
        func_144F00(1);
        D_0024FF48 = 0;
        *p = 0;
        return 1;
    }
    return 0;
}
