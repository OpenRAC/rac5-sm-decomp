/* USA LEVEL_16.REL:0x115D48, 228-byte candidate (21 November 2026).
 * Measured pinned: 4 differing words; first difference at 0x5C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern int D_001B8364;
extern float D_001E0620;
extern unsigned char D_001B8374;
extern unsigned char D_001B8375;
extern char D_001CF958[];
extern char D_001CF970[];

extern void func_0A7F48(int port, char *text, int id);

void func_115D48(void)
{
    unsigned int d;
    int i;

    d = D_001B8364 - (int)D_001E0620;
    if (D_001B8375 == 0 && d < 0x1E) {
        for (i = 0; i < 2; i++) {
            func_0A7F48(i, D_001CF958, 0x67A);
        }
        D_001B8375 = 1;
        return;
    }
    if (D_001B8374 == 0 && d < 10) {
        for (i = 0; i < 2; i++) {
            func_0A7F48(i, D_001CF970, 0x67B);
        }
        D_001B8374 = 1;
    }
}
