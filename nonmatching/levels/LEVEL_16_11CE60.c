/* USA LEVEL_16.REL:0x11CE60, 276-byte candidate (21 November 2026).
 * Measured pinned --as=r5900-mfc1: 22 differing words; first difference at
 * 0x2C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern int D_001B8560[2];
extern int D_001B8568[2];
extern unsigned char D_001B8570[2];
extern float D_001B8578[2];
extern float D_001B8580;
extern int D_001B8590[2];

void func_11CE60(void)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        if (D_001B8590[i] != 0) {
            D_001B8590[i]--;
            if (D_001B8570[i] != 0) {
                D_001B8568[i] += (int)(D_001B8580 / D_001B8578[i] * 8.0f);
                if (D_001B8568[i] > 0xCC) {
                    D_001B8570[i] = 0;
                    D_001B8568[i] = 0xCC;
                }
            } else {
                D_001B8568[i] -= (int)(D_001B8580 / D_001B8578[i] * 8.0f);
                if (D_001B8568[i] < 0x22) {
                    D_001B8570[i] = 1;
                    D_001B8568[i] = 0x22;
                }
            }
            D_001B8560[i] = D_001B8568[i];
        } else {
            D_001B8560[i] -= 8;
            if (D_001B8560[i] < 0) {
                D_001B8560[i] = 0;
            }
        }
    }
}
