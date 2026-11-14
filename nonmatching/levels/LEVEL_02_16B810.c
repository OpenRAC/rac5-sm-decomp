/* USA LEVEL_02.REL:0x16B810, 44-byte candidate (14 November 2026).
 * Measured pinned: 3 differing words; first difference at 0x18.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad_00[0x45];
    unsigned char state;
} Actor;

int func_16B810(Actor *a)
{
    int state = a->state;
    int r = 0;

    if (state != 0x15 && state != 0x17) {
        r = (state ^ 0x18) != 0;
    }
    return r;
}
