/* USA LEVEL_01.REL:0x0B2F10, 164-byte candidate (14 November 2026).
 * Measured pinned: 22 differing words; first difference at 0x48.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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
    if (D_00327A18[i].timer != 0) {
        *lv += 8;
    } else {
        *lv -= 8;
    }
    if (Past(D_00327A18[i].level, 255)) {
        D_00327A18[i].level = 255;
    }
    if (D_00327A18[i].level < 0) {
        D_00327A18[i].level = 0;
    }
}
