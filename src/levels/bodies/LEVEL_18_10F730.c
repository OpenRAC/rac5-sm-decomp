/* LEVEL_18:0x10F730 -- placement copy of FRONTEND_021668.c: clears a pending flag pair after one call, returns 1 if it was set. */
extern unsigned char D_001B6018; extern int D_001B6010; extern void func_10F3E8(int);
int func_10F730(void)
{
    int *p = &D_001B6010;
    if (D_001B6018 != 0) {
        func_10F3E8(1);
        D_001B6018 = 0;
        *p = 0;
        return 1;
    }
    return 0;
}
