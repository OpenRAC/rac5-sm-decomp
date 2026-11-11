/* LEVEL_06:0x12A3E0 -- placement copy of FRONTEND_021668.c: clears a pending flag pair after one call, returns 1 if it was set. */
extern unsigned char D_001F5C88; extern int D_001F5C80; extern void func_12A098(int);
int func_12A3E0(void)
{
    int *p = &D_001F5C80;
    if (D_001F5C88 != 0) {
        func_12A098(1);
        D_001F5C88 = 0;
        *p = 0;
        return 1;
    }
    return 0;
}
