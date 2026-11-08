/* LEVEL_02.REL:0x09E6E8: reviewed 92-byte candidate.
 * gnu-ee-trial C with gnu-ee-trial links 92 bytes; first differs at +10.
 * Retry: Recover list-link formation with the source multiplication and first-pointer
 * register lifetime. The retained gnu-ee-trial C links 92/92, first differs at byte
 * 10; count-zero input range remains unproven.
 * No matching credit.
 */
void func_09E6E8(char *state)
{
    int count = *(int *)(state + 0x10);
    char *first = *(char **)(state + 0x0c);
    char *last = first + count * 0x2c - 0x2c;
    char *entry = first;
    while (entry != last) {
        *(char **)(entry + 0x24) = entry + 0x2c;
        entry += 0x2c;
    }
    *(char **)(entry + 0x24) = 0;
    *(char **)(state + 8) = state + 4;
    *(char **)(state + 4) = state + 4;
    *(char **)(state + 0) = first;
}
