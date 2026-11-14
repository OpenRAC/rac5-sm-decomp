/* USA LEVEL_18.REL:0x158100, 196-byte candidate (14 November 2026).
 * Measured pinned: 9 differing words; first difference at 0x20.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern int func_036520(int handle);
extern int func_036530(char *record);
extern int func_111AA0(int index);

int func_158100(char *object)
{
    char *owner;
    int *state;
    unsigned int i;
    int handle;

    owner = *(char **)(*(char **)(object + 0x54));
    state = *(int **)(object + 0x58);
    if (*(unsigned char *)(owner + 0x45) == 2) {
        state[0] = 0;
        return 1;
    }
    if (state[0] != 0) {
        if (func_036520(state[0]) != 0) {
            return 1;
        }
    } else {
        for (i = 0; i < 2; i++) {
            handle = func_111AA0(i);
            if (handle != 0 && func_036530((char *)handle) == (int)owner) {
                state[0] = handle;
                state[1] = handle;
                return 1;
            }
        }
    }
    state[0] = 0;
    return 0;
}
