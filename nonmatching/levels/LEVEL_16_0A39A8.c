/* USA LEVEL_16.REL:0x0A39A8, 172-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 136 linked bytes; first differing word +0x4.
 * Unaccepted; no matching credit. Recover the countdown/value table layout and alias identity before reproducing its clamp sequence.
 */
extern char D_2763E0[], D_2763E4[];
void func_0A39A8(void)
{
    unsigned int i;
    char *entry = D_2763E0;
    int *value = (int *)(entry + 4);
    for (i = 0; i < 2; ++i, entry += 12, value += 3) {
        if (*(unsigned int *)entry)
            --*(unsigned int *)entry;
        if (!*(unsigned int *)entry)
            *value = (int)((unsigned int)*(int *)(entry + 4) - 8U);
        else
            *value = (int)((unsigned int)*value + 8U);
        if (*(int *)(D_2763E4 + i * 12) > 255)
            *(int *)(D_2763E4 + i * 12) = 255;
        if (*(int *)(D_2763E4 + i * 12) < 0)
            *(int *)(D_2763E4 + i * 12) = 0;
    }
}
