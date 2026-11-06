/* LEVEL_02.REL:0x0A8278, bounded 184-byte candidate.
 * Isolated pinned C object: 148 bytes; first linked
 * difference at body byte +1. Not linked into the accepted
 * gate or counted.
 * Reopen: The 64-bit header (dsll32/or) and the 16-byte lwl/lwr block copies are not reproduced. Reopen with a 64-bit bitfield header and explicit block copies.
 */
unsigned int *func_000A8278(unsigned int *param_1, unsigned int param_2,
                            unsigned long long *param_3, unsigned int param_4)
{
    unsigned int i;
    unsigned long long v;

    *param_1 = (param_4 + 1) | 0x10000000;
    param_1[1] = (int)(param_4 + 1) >> 31;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = (param_4 << 16) | param_2 | 0x6C000000;
    param_1 += 8;
    i = 0;
    if (param_4 != 0) {
        do {
            v = *param_3;
            param_1[0] = (unsigned int)v;
            param_1[1] = (unsigned int)(v >> 32);
            param_1[2] = *(unsigned int *)(param_3 + 1);
            param_1[3] = *(unsigned int *)((int)param_3 + 0xC);
            i = i + 1;
            param_3 += 2;
            param_1 += 4;
        } while (i < param_4);
    }
    return param_1;
}
