/* USA LEVEL_16.REL:0x11C6F0, 144-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 140 linked bytes; first differing word +0x8.
 * Unaccepted; no matching credit. Recover countdown aliasing and the memory clamp helper before retrying the signed channel updates.
 */
/* Update two fading channels from their remaining frame counters. */
extern int D_001B8528[2];
extern unsigned int D_001B8530[2];
void func_11C6F0(void)
{
    int *level = D_001B8528;
    unsigned int *remaining = D_001B8530;
    for (; level < D_001B8528 + 2; ++level, ++remaining) {
        if (*remaining) --*remaining;
        if (*remaining == 0) *level -= 8;
        else *level += 8;
        if (*level > 255) *level = 255;
        if (*level < 0) *level = 0;
    }
}
