/* LEVEL_17:0x112360 -- placement copy of LEVEL_16_112BD0.c: tests whether the value is stored in one of the flagged slots of the current row. */
extern int D_001C3920;
extern int D_001A8228;
extern int D_001A823C;
extern unsigned int D_001AB678[][3][8];

int func_112360(unsigned int key)
{
    int level = D_001C3920 - 16;
    unsigned int *row = D_001AB678[level][D_001A8228];
    int mask = D_001A823C;
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
