/* LEVEL_20:0x0E7D80 -- placement copy of LEVEL_16_115438.c: when a guard byte is clear and the first argument is set, latches two flag bytes, runs the helper, and clears a trailing flag. */
extern unsigned char D_0011A9F0;
extern unsigned char D_0011A9F1;
extern unsigned char D_0011AA11;
extern unsigned char D_0011AA13;
extern unsigned char D_0011AA16;

extern int func_0E84B0(int value);

void func_0E7D80(int a0, int a1, int a2, int a3)
{
    if (a0 != 0) {
        if (D_0011A9F0 == 0) {
            D_0011AA11 = a1;
            D_0011AA13 = a3;
            D_0011A9F0 = 1;
            func_0E84B0(a2);
            D_0011A9F1 = 0;
            D_0011AA16 = 1;
        }
    }
}
