/* LEVEL_16:0x115438 -- when a guard byte is clear and the first argument is set, latches two flag bytes, runs the helper, and clears a trailing flag. */
extern unsigned char D_001B8350;
extern unsigned char D_001B8351;
extern unsigned char D_001B8371;
extern unsigned char D_001B8373;
extern unsigned char D_001B8376;

extern int func_115BB0(int value);

void func_115438(int a0, int a1, int a2, int a3)
{
    if (a0 != 0) {
        if (D_001B8350 == 0) {
            D_001B8371 = a1;
            D_001B8373 = a3;
            D_001B8350 = 1;
            func_115BB0(a2);
            D_001B8351 = 0;
            D_001B8376 = 1;
        }
    }
}
