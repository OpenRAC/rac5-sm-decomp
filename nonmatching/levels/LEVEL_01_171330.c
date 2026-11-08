/* LEVEL_01.REL:0x171330: reviewed 88-byte candidate.
 * pinned C with gnu-ee-trial links 84 bytes; first differs at +8.
 * Retry: Recover the state-test branch structure and accepted caller prototype
 * without dead control flow.
 * No matching credit.
 */
int func_171330(char *record)
{
    char *entry = *(char **)(record + 0x58);
    int state;

    if (*(int *)(entry + 0x58) != 0) {
        state = *(int *)(entry + 0x1C);
        switch (state) {
        case 0: {
            char *sub = *(char **)(entry + 0x20);
            return (*(unsigned int *)(sub + 0x64) & 0xF) == 1;
        }
        case 1:
            return 1;
        default:
            return 0;
        }
    }
    return 0;
}
