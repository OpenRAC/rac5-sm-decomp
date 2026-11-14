/* LEVEL_20:0x0E5778 -- placement copy of LEVEL_16_112BD0.c: tests whether the value is stored in one of the flagged slots of the current row. */
extern int D_00131510;
extern int D_001172E8;
extern int D_001172FC;
extern unsigned int D_0011A738[][3][8];

int func_0E5778(unsigned int key)
{
    int level = D_00131510 - 16;
    unsigned int *row = D_0011A738[level][D_001172E8];
    int mask = D_001172FC;
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
