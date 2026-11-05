/* USA LEVEL_22:0x1311A0, 64 retail bytes; two raw-identical candidate sites.
 * Pinned C also links to 64 bytes but first differs at body byte 2 in the
 * child-pointer register and early return layout. A typed record with signed
 * sentinel was measured too. Revisit the selector's original source and
 * register lifetime before claiming either site. This source is uncounted.
 */
unsigned int func_1311A0(char *object)
{
    char *child = *(char **)(object + 0x58);
    if (child != 0) {
        unsigned int slot = *(unsigned char *)(child + 0xAD);
        if (slot < 4 && *(int *)(child + 0x40 + slot * 4) != 0)
            return slot;
    }
    return 0xFFFFFFFFu;
}
