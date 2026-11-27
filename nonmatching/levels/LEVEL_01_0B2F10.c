/* USA LEVEL_01:0B2F10, 164-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 164 bytes: 20 differing words; first difference +0x38. No matching credit.
 * Remaining issue: address form: first 0x38 bytes exact; retail builds the level pointer for the
 * +/-8 arms as off + (base + 4) from the saved %hi and the clamp pointer from a fresh lui of
 * &D[0].level, ours does the reverse (lv gets the fresh constant); an inline Clamp(&D[i].level)
 * gets the fresh lui for the clamp but then duplicates the arm addresses (29-36 words);
 * condition order timer == 0 first saves 2 words
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x0B2F10 -- steps one fade slot: counts its timer down, then raises its level by 8 while the timer runs and lowers it by 8 afterwards, clamped to 0..255. */
typedef struct {
    int timer;
    int level;
    char pad8[0x18];
} Fade;

extern Fade D_00327A18[];

static __inline__ int Past(int v, int max)
{
    return v > max;
}

void func_0B2F10(int i)
{
    int *lv;

    if (D_00327A18[i].timer == 0 || --D_00327A18[i].timer == 0) {
        if (D_00327A18[i].level == 0) {
            return;
        }
    }
    lv = &D_00327A18[i].level;
    if (D_00327A18[i].timer == 0) {
        *lv -= 8;
    } else {
        *lv += 8;
    }
    if (Past(D_00327A18[i].level, 255)) {
        D_00327A18[i].level = 255;
    }
    if (D_00327A18[i].level < 0) {
        D_00327A18[i].level = 0;
    }
}
