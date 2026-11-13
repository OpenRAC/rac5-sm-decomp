/* USA LEVEL_16.REL:0x112BD0, 120-byte candidate.
 * Measured pinned/gnu-ee-trial: 112 linked bytes; first differing word +0x14.
 * Recover the observed types and lifetimes before retrying the same mismatch class.
 */
extern int D_001D04A0, D_001B4C28, D_001B4C3C;
extern unsigned int D_001B8078[][3][8];
int func_112BD0(unsigned int key)
{
    unsigned int *row = D_001B8078[D_001D04A0 - 16][D_001B4C28];
    int mask = D_001B4C3C;
    unsigned int i;
    for (i = 0; i < 8; ++i)
        if ((mask & (1 << i)) && row[i] == key)
            return 1;
    return 0;
}
