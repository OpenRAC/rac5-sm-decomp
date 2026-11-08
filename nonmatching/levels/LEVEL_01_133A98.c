/* LEVEL_01.REL:0x133A98: reviewed 80-byte candidate.
 * pinned C with gnu-ee-trial links 72 bytes; first differs at +32.
 * Retry: Resolve the state-check and duplicate-return control flow without a
 * tautological C condition; current semantic C links shorter.
 * No matching credit.
 */
extern void *D_00207068;
extern void *D_00207064;
int func_133A98(void *value)
{
    char *record;
    int state;
    if (D_00207068 == 0)
        return 0;
    if (value == D_00207068)
        goto active;
    return 0;
active:
    record = D_00207064;
    state = *(int *)(record + 4);
    if (state != 1)
        return 0;
    *(int *)(record + 4) = 2;
    return 1;
}

