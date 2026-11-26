/* LEVEL_17:0x114B98 -- placement copy of LEVEL_16_115438.c: when a guard byte is clear and the first argument is set, latches two flag bytes, runs the helper, and clears a trailing flag. */
extern unsigned char D_001AB948;
extern unsigned char D_001AB949;
extern unsigned char D_001AB969;
extern unsigned char D_001AB96B;
extern unsigned char D_001AB96E;

extern int func_115310(int value);

void func_114B98(int a0, int a1, int a2, int a3)
{
    if (a0 != 0) {
        if (D_001AB948 == 0) {
            D_001AB969 = a1;
            D_001AB96B = a3;
            D_001AB948 = 1;
            func_115310(a2);
            D_001AB949 = 0;
            D_001AB96E = 1;
        }
    }
}
