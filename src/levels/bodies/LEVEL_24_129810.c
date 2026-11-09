/* LEVEL_24:0x129810 -- placement copy of FRONTEND_021668.c: clears a pending flag pair after one call, returns 1 if it was set. */
extern unsigned char D_001D7D08; extern int D_001D7D00; extern void func_1294C8(int);
int func_129810(void)
{
    int *p = &D_001D7D00;
    if (D_001D7D08 != 0) {
        func_1294C8(1);
        D_001D7D08 = 0;
        *p = 0;
        return 1;
    }
    return 0;
}
