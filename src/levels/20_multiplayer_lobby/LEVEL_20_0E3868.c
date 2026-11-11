/* LEVEL_20:0x0E3868 -- placement copy of FRONTEND_021668.c: clears a pending flag pair after one call, returns 1 if it was set. */
extern unsigned char D_00117258; extern int D_00117250; extern void func_0E3520(int);
int func_0E3868(void)
{
    int *p = &D_00117250;
    if (D_00117258 != 0) {
        func_0E3520(1);
        D_00117258 = 0;
        *p = 0;
        return 1;
    }
    return 0;
}
