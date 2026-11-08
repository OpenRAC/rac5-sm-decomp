/* LEVEL_02.REL:0x096630: reviewed 144-byte candidate.
 * pinned C with gnu-ee-trial links 148 bytes; first differs at +8.
 * Retry: Recover the float constant and fourth-component store schedule; the pinned
 * compiler links four bytes too long and alternate assemblers do not change it.
 * No matching credit.
 */
void func_096630(float *destination, const char *source, int count)
{
    float *end = destination + count * 4;
    for (; destination != end; destination += 4, source += 0x90) {
        float z;
        destination[0] = (*(const float *)(source + 0x20) +
                          *(const float *)(source + 0x50) +
                          *(const float *)(source + 0x80)) / 3.0f;
        destination[1] = (*(const float *)(source + 0x24) +
                          *(const float *)(source + 0x54) +
                          *(const float *)(source + 0x84)) / 3.0f;
        z = *(const float *)(source + 0x28) +
            *(const float *)(source + 0x58);
        destination[3] = 1.0f;
        destination[2] = (z + *(const float *)(source + 0x88)) / 3.0f;
    }
}
