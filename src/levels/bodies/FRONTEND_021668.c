/* FRONTEND:0x021668 -- clears a pending flag pair after one call, returns 1 if it was set. */
extern unsigned char D_00032850; extern int D_00032848; extern void func_021368(int);
int func_021668(void)
{
    int *p = &D_00032848;
    if (D_00032850 != 0) {
        func_021368(1);
        D_00032850 = 0;
        *p = 0;
        return 1;
    }
    return 0;
}
