/* LEVEL_02.REL:0x04FBD0, bounded 180-byte candidate.
 * Isolated pinned C object: 180 bytes; first linked
 * difference at body byte +26. Not linked into the accepted
 * gate or counted.
 * Reopen: Recheck the measured register or order difference.
 */
extern int *DAT_00208C2C;

int func_0004FBD0(char *param_1)
{
    unsigned int *base = (unsigned int *)(param_1 + 0xC0);

    if (0.0f < *(float *)(param_1 + 0x134)) {
        unsigned int flags = base[6];

        if ((DAT_00208C2C[9] == 2 && (flags & 0x4100) != 0) ||
            (DAT_00208C2C[9] != 2 && (flags & 0x4000) != 0)) {
            *(unsigned short *)(param_1 + 0x102) = 3;
            if (DAT_00208C2C[9] == 2)
                base[6] &= 0xFFFFBEFF;
            else
                base[6] &= 0xFFFFBFFF;
            return 1;
        }
        *(float *)(param_1 + 0x134) -= 1.0f;
    }
    return 0;
}
