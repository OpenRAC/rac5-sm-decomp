/* LEVEL_01.REL:0x04AC48, bounded 180-byte candidate.
 * Isolated pinned C object: 180 bytes; first linked
 * difference at body byte +26. Not linked into the accepted
 * gate or counted.
 * Reopen: The size is correct; the temporaries p ($a3) and value ($a2) are swapped. Reopen by swapping their creation order.
 */
extern int D_001F3FAC;

int func_04AC48(char *param_1)
{
    int *p = (int *)(param_1 + 0xC0);

    if (0.0f < *(float *)(param_1 + 0x134)) {
        unsigned int value = p[6];
        if (*(int *)(D_001F3FAC + 0x24) == 2 ? (value & 0x4100)
                                              : (value & 0x4000)) {
            *(short *)(param_1 + 0x102) = 3;
            if (*(int *)(D_001F3FAC + 0x24) == 2)
                p[6] &= 0xFFFFBEFF;
            else
                p[6] &= 0xFFFFBFFF;
            return 1;
        }
        *(float *)(param_1 + 0x134) = *(float *)(param_1 + 0x134) - 1.0f;
    }
    return 0;
}
