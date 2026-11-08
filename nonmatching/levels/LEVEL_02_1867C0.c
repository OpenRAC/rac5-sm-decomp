/* LEVEL_02.REL:0x1867C0: reviewed 100-byte candidate.
 * pinned C with gnu-ee-trial links 88 bytes; first differs at +28.
 * Retry: Recover the original state-switch control flow without dead assignments or
 * artificial guards.
 * No matching credit.
 */
extern int func_186768(void *);
extern void func_185590(void *);

void func_1867C0(char *state)
{
    char *nested = *(char **)(state + 0x58);

    if (func_186768(state) == 0 ||
        *(unsigned int *)(nested + 0x58) < 2)
        func_185590(state);
    state[0x45] = 2;
}
