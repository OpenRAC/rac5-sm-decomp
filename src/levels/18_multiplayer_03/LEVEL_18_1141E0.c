/* LEVEL_18:0x1141E0 -- placement copy of LEVEL_16_115438.c: when a guard byte is clear and the first argument is set, latches two flag bytes, runs the helper, and clears a trailing flag. */
extern unsigned char D_001B97D0;
extern unsigned char D_001B97D1;
extern unsigned char D_001B97F1;
extern unsigned char D_001B97F3;
extern unsigned char D_001B97F6;

extern int func_114958(int value);

void func_1141E0(int a0, int a1, int a2, int a3)
{
    if (a0 != 0) {
        if (D_001B97D0 == 0) {
            D_001B97F1 = a1;
            D_001B97F3 = a3;
            D_001B97D0 = 1;
            func_114958(a2);
            D_001B97D1 = 0;
            D_001B97F6 = 1;
        }
    }
}
