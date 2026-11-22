/* LEVEL_17:0x1154A8 -- placement copy of LEVEL_16_115D48.c: once the elapsed count since a reference time reaches one of two thresholds, sends a message to both ports and latches the matching flag. */
extern int D_001AB95C;
extern float D_001D1920;
extern unsigned char D_001AB96C;
extern unsigned char D_001AB96D;
extern char D_001C2DD8[];
extern char D_001C2DF0[];

extern void func_0A7488(int index, int previous, int id);

void func_1154A8(void)
{
    unsigned int d;
    int i;

    d = D_001AB95C - (int)D_001D1920;
    if (D_001AB96D == 0 && d < 0x1E) {
        for (i = 0; i < 2; i++) {
            do {
                func_0A7488(i, (int)D_001C2DD8, 0x67A);
            } while (0);
        }
        D_001AB96D = 1;
        return;
    }
    if (D_001AB96C == 0 && d < 10) {
        for (i = 0; i < 2; i++) {
            do {
                func_0A7488(i, (int)D_001C2DF0, 0x67B);
            } while (0);
        }
        D_001AB96C = 1;
    }
}
