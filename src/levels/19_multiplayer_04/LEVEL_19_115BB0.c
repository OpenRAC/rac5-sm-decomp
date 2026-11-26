/* LEVEL_19:0x115BB0 -- placement copy of LEVEL_16_115438.c: when a guard byte is clear and the first argument is set, latches two flag bytes, runs the helper, and clears a trailing flag. */
extern unsigned char D_001B94C8;
extern unsigned char D_001B94C9;
extern unsigned char D_001B94E9;
extern unsigned char D_001B94EB;
extern unsigned char D_001B94EE;

extern int func_116328(int value);

void func_115BB0(int a0, int a1, int a2, int a3)
{
    if (a0 != 0) {
        if (D_001B94C8 == 0) {
            D_001B94E9 = a1;
            D_001B94EB = a3;
            D_001B94C8 = 1;
            func_116328(a2);
            D_001B94C9 = 0;
            D_001B94EE = 1;
        }
    }
}
