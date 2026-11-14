/* LEVEL_18:0x111988 -- placement copy of LEVEL_16_112BD0.c: tests whether the value is stored in one of the flagged slots of the current row. */
extern int D_001D1A20;
extern int D_001B60A8;
extern int D_001B60BC;
extern unsigned int D_001B94F8[][3][8];

int func_111988(unsigned int key)
{
    int level = D_001D1A20 - 16;
    unsigned int *row = D_001B94F8[level][D_001B60A8];
    int mask = D_001B60BC;
    unsigned int i;
    int bit;

    for (i = 0; i < 8; i++) {
        bit = 1 << i;
        if ((mask & bit) && row[i] == key) {
            return 1;
        }
    }
    return 0;
}
