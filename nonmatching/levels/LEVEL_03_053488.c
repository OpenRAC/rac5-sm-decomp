/* LEVEL_03.REL:0x053488, bounded 196-byte candidate.
 * Isolated pinned C object: 196 bytes; first linked
 * difference at body byte +28. Not linked into the accepted
 * gate or counted.
 * Reopen: Recheck the measured register or order difference.
 */
extern float D_0020791C;

void func_00053488(int base)
{
    int counts[2];
    int *p;
    int n;
    float max;
    float v;

    counts[1] = 2;
    max = *(float *)(base + 0x250);
    counts[0] = (int)(D_0020791C * 59.998802f);
    p = counts;
    if (counts[0] >= 2) {
        p = counts + 1;
    }
    n = *p;
    if (n > 0) {
        do {
            v = (*(float *)(base + 0x240) - *(float *)(base + 0x23C)) *
                    *(float *)(base + 0x248) -
                *(float *)(base + 0x244) * *(float *)(base + 0x24C);
            *(float *)(base + 0x244) = v;
            if (max < v) {
                *(float *)(base + 0x244) = max;
            } else if (v < -max) {
                *(float *)(base + 0x244) = -max;
            }
            n = n - 1;
            *(float *)(base + 0x23C) =
                *(float *)(base + 0x23C) + *(float *)(base + 0x244);
        } while (n != 0);
    }
}
