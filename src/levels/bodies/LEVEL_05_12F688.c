/* LEVEL_05:0x12F688 -- placement copy of FRONTEND_021668.c: clears a pending flag pair after one call, returns 1 if it was set. */
extern unsigned char D_001F6108; extern int D_001F6100; extern void func_12F340(int);
int func_12F688(void)
{
    int *p = &D_001F6100;
    if (D_001F6108 != 0) {
        func_12F340(1);
        D_001F6108 = 0;
        *p = 0;
        return 1;
    }
    return 0;
}
