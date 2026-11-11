/* LEVEL_22:0x10B1E0 -- placement copy of FRONTEND_021668.c: clears a pending flag pair after one call, returns 1 if it was set. */
extern unsigned char D_00166068; extern int D_00166060; extern void func_10AE98(int);
int func_10B1E0(void)
{
    int *p = &D_00166060;
    if (D_00166068 != 0) {
        func_10AE98(1);
        D_00166068 = 0;
        *p = 0;
        return 1;
    }
    return 0;
}
