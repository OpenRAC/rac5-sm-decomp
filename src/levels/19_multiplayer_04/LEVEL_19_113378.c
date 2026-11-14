/* LEVEL_19:0x113378 -- placement copy of LEVEL_16_112BD0.c: tests whether the value is stored in one of the flagged slots of the current row. */
extern int D_001D16A0;
extern int D_001B5DA8;
extern int D_001B5DBC;
extern unsigned int D_001B91F8[][3][8];

int func_113378(unsigned int key)
{
    int level = D_001D16A0 - 16;
    unsigned int *row = D_001B91F8[level][D_001B5DA8];
    int mask = D_001B5DBC;
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
