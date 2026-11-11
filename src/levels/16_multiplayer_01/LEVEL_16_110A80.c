/* LEVEL_16:0x110A80 -- placement copy of FRONTEND_021668.c: clears a pending flag pair after one call, returns 1 if it was set. */
extern unsigned char D_001B4B98; extern int D_001B4B90; extern void func_110738(int);
int func_110A80(void)
{
    int *p = &D_001B4B90;
    if (D_001B4B98 != 0) {
        func_110738(1);
        D_001B4B98 = 0;
        *p = 0;
        return 1;
    }
    return 0;
}
