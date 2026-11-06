/* LEVEL_01.REL:0x18D290: Ghidra body 80 bytes.
 * Pinned pure C links 80 bytes and first differs at +18.
 * Recheck the named ATRAC import argument and caller-saved registers. No matching credit.
 */
extern char *D_002085F4;
extern void SND_StopATRACInstance__FP13ATRACInstance(void *);

void func_18D290(void)
{
    char *instance = D_002085F4;
    if (instance != 0) {
        int *state = *(int **)(instance + 0x58);
        if (*state != 0) {
            SND_StopATRACInstance__FP13ATRACInstance(instance);
            *state = 0;
        }
        D_002085F4 = 0;
    }
}
