/* USA LEVEL_02.REL:0x17BC18, 84-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 80 linked bytes; first differing word +0xC.
 * Unaccepted; no matching credit. Recover the promoted-byte wrap helper and early-return layout without changing the four-slot scan.
 */
/* Select the next occupied entry in a four-slot pool, wrapping the byte index. */
int func_17BC18(unsigned char *object)
{
    void **slots = *(void ***)(object + 0x54);
    unsigned int count = 0;
    unsigned char previous = object[0x46];
    do {
        int next = previous + 1;
        unsigned char index = next;
        if (next > 3) index = 0;
        previous = index;
        if (slots[index]) return index;
    } while (++count < 4);
    return 255;
}
