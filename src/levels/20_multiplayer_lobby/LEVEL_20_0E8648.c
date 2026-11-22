/* LEVEL_20:0x0E8648 -- placement copy of LEVEL_16_115D48.c: once the elapsed count since a reference time reaches one of two thresholds, sends a message to both ports and latches the matching flag. */
extern int D_0011AA04;
extern float D_00137FA0;
extern unsigned char D_0011AA14;
extern unsigned char D_0011AA15;
extern char D_001309C8[];
extern char D_001309E0[];

extern void func_092498(int index, int previous, int id);

void func_0E8648(void)
{
    unsigned int d;
    int i;

    d = D_0011AA04 - (int)D_00137FA0;
    if (D_0011AA15 == 0 && d < 0x1E) {
        for (i = 0; i < 2; i++) {
            do {
                func_092498(i, (int)D_001309C8, 0x67A);
            } while (0);
        }
        D_0011AA15 = 1;
        return;
    }
    if (D_0011AA14 == 0 && d < 10) {
        for (i = 0; i < 2; i++) {
            do {
                func_092498(i, (int)D_001309E0, 0x67B);
            } while (0);
        }
        D_0011AA14 = 1;
    }
}
