/* LEVEL_02.REL:0x027D88: reviewed 124-byte candidate.
 * pinned C with gnu-ee-trial links 112 bytes; first differs at +2.
 * Retry: Recover the loop structure and repeated global count reads without an
 * unsupported volatile qualifier.
 * No matching credit.
 */
extern unsigned char *D_00208C2C;

int func_027D88(unsigned int value)
{
    unsigned char *state = D_00208C2C;
    unsigned int index = 0;
    if (state[0x1c60] >= 100)
        return 0;
    if (state[0x1c60] != 0) {
        unsigned char *entry = state + 0x1be0;
        do {
            index++;
            if (*entry == value)
                return 0;
            entry = state + 0x1be0 + index;
        } while (index < state[0x1c60]);
    }
    state = D_00208C2C;
    index = state[0x1c60];
    state[0x1c60] = index + 1;
    state[0x1be0 + index] = value;
    return 1;
}
