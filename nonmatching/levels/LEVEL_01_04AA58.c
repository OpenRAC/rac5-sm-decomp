/* LEVEL_01.REL:0x04AA58: Ghidra body 196 bytes.
 * Pure C with `pinned` links 180 bytes and first differs at +10.
 * Recheck the global mode and subrecord register lifetimes. No matching credit.
 */
extern char *D_001F3FAC;

int func_04AA58(char *record)
{
    float remaining;
    int phase = *(int *)(record + 0x168);
    char *state = record + 0xc0;
    if (phase == 2 &&
        *(float *)(record + 0x128) <= 0.0f &&
        *(float *)(record + 0x134) <= 0.0f) {
        remaining = *(float *)(record + 0x140) - 1.0f;
        *(float *)(record + 0x140) = remaining;
        if (remaining <= 0.0f) {
            if (*(int *)(D_001F3FAC + 0x24) == 2) {
                if ((*(unsigned int *)(state + 0x14) & 0x4100) == 0)
                    return 0;
            } else if ((*(unsigned int *)(state + 0x14) & 0x4000) == 0) {
                return 0;
            }
            if (*(int *)(record + 0x5ac) != 0) {
                *(short *)(state + 0x42) = 0xf;
                return 1;
            }
        }
    }
    return 0;
}
