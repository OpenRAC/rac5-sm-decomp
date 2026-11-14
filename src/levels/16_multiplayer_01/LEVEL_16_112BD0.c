/* LEVEL_16:0x112BD0 -- tests whether the value is stored in one of the flagged slots of the current row. */
extern int D_001D04A0;
extern int D_001B4C28;
extern int D_001B4C3C;
extern unsigned int D_001B8078[][3][8];

int func_112BD0(unsigned int key)
{
    int level = D_001D04A0 - 16;
    unsigned int *row = D_001B8078[level][D_001B4C28];
    int mask = D_001B4C3C;
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
