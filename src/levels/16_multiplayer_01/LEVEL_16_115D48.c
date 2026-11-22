/* LEVEL_16:0x115D48 -- once the elapsed count since a reference time reaches one of two thresholds, sends a message to both ports and latches the matching flag. */
extern int D_001B8364;
extern float D_001E0620;
extern unsigned char D_001B8374;
extern unsigned char D_001B8375;
extern char D_001CF958[];
extern char D_001CF970[];

extern void func_0A7F48(int index, int previous, int id);

void func_115D48(void)
{
    unsigned int d;
    int i;

    d = D_001B8364 - (int)D_001E0620;
    if (D_001B8375 == 0 && d < 0x1E) {
        for (i = 0; i < 2; i++) {
            do {
                func_0A7F48(i, (int)D_001CF958, 0x67A);
            } while (0);
        }
        D_001B8375 = 1;
        return;
    }
    if (D_001B8374 == 0 && d < 10) {
        for (i = 0; i < 2; i++) {
            do {
                func_0A7F48(i, (int)D_001CF970, 0x67B);
            } while (0);
        }
        D_001B8374 = 1;
    }
}
