/* LEVEL_19:0x1164C0 -- placement copy of LEVEL_16_115D48.c: once the elapsed count since a reference time reaches one of two thresholds, sends a message to both ports and latches the matching flag. */
extern int D_001B94DC;
extern float D_001E07A0;
extern unsigned char D_001B94EC;
extern unsigned char D_001B94ED;
extern char D_001D0B58[];
extern char D_001D0B70[];

extern void func_0A7820(int index, int previous, int id);

void func_1164C0(void)
{
    unsigned int d;
    int i;

    d = D_001B94DC - (int)D_001E07A0;
    if (D_001B94ED == 0 && d < 0x1E) {
        for (i = 0; i < 2; i++) {
            do {
                func_0A7820(i, (int)D_001D0B58, 0x67A);
            } while (0);
        }
        D_001B94ED = 1;
        return;
    }
    if (D_001B94EC == 0 && d < 10) {
        for (i = 0; i < 2; i++) {
            do {
                func_0A7820(i, (int)D_001D0B70, 0x67B);
            } while (0);
        }
        D_001B94EC = 1;
    }
}
