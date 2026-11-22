/* LEVEL_18:0x114AF0 -- placement copy of LEVEL_16_115D48.c: once the elapsed count since a reference time reaches one of two thresholds, sends a message to both ports and latches the matching flag. */
extern int D_001B97E4;
extern float D_001E09A0;
extern unsigned char D_001B97F4;
extern unsigned char D_001B97F5;
extern char D_001D0ED8[];
extern char D_001D0EF0[];

extern void func_0A6F20(int index, int previous, int id);

void func_114AF0(void)
{
    unsigned int d;
    int i;

    d = D_001B97E4 - (int)D_001E09A0;
    if (D_001B97F5 == 0 && d < 0x1E) {
        for (i = 0; i < 2; i++) {
            do {
                func_0A6F20(i, (int)D_001D0ED8, 0x67A);
            } while (0);
        }
        D_001B97F5 = 1;
        return;
    }
    if (D_001B97F4 == 0 && d < 10) {
        for (i = 0; i < 2; i++) {
            do {
                func_0A6F20(i, (int)D_001D0EF0, 0x67B);
            } while (0);
        }
        D_001B97F4 = 1;
    }
}
