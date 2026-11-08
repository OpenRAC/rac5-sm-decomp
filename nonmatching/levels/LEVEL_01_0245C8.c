/* LEVEL_01.REL:0x0245C8: reviewed 92-byte candidate.
 * pinned C with gnu-ee-trial links 92 bytes; first differs at +54.
 * Retry: Recover the compiler operand ordering for two commutative additions in the
 * record lookup. The retained C links 92/92 and first differs at byte 54 after four
 * defined source forms.
 * No matching credit.
 */
extern int D_001F35D8[];

int func_0245C8(unsigned int index, int kind)
{
    int step = kind + 1;
    if (index < 25 && step >= 0 && step < 2) {
        int base = (int)D_001F35D8;
        char *record = (char *)(base + (step + index) * 0x58);
        if (*(int *)(record + 4) == 3)
            return (step * 0x58 + base) + index * 0x58;
    }
    return 0;
}
