/* USA LEVEL_01:04AA58, 196-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 188 bytes: 15 differing words; first difference +0xC. No matching credit.
 * Remaining issue: delay-slot fill / return block (188 vs 196 B, from 27 words at 180 B):
 * record+0x102 store, separate per-mode mask tests (arm 1 inline return, arm 2 goto the final
 * return) give retail registers and block order; retail keeps v0=0 ahead of the final jr (nop
 * slot) and copies it into the bc1f/beqz delay slots, ours moves it into the jr delay slot;
 * -fexceptions and a result-variable form tried
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x04AA58 -- in phase 2 with both timers expired, counts down the third timer and, when it runs out and the mode-dependent flag mask allows it, arms the record and returns 1. */
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
            } else {
                if ((*(unsigned int *)(state + 0x14) & 0x4000) == 0)
                    goto fail;
            }
            if (*(int *)(record + 0x5ac) != 0) {
                *(short *)(record + 0x102) = 0xf;
                return 1;
            }
        }
    }
fail:
    return 0;
}
