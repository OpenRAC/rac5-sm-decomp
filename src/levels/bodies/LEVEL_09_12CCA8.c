/* LEVEL_09:0x12CCA8 -- placement copy of FRONTEND_021668.c: clears a pending flag pair after one call, returns 1 if it was set. */
extern unsigned char D_001F0B88; extern int D_001F0B80; extern void func_12C960(int);
int func_12CCA8(void)
{
    int *p = &D_001F0B80;
    if (D_001F0B88 != 0) {
        func_12C960(1);
        D_001F0B88 = 0;
        *p = 0;
        return 1;
    }
    return 0;
}
