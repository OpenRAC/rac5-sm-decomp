/* LEVEL_02.REL:0x1D8838: reviewed 96-byte candidate.
 * pinned C with gnu-ee-trial links 96 bytes; first differs at +5.
 * Retry: Recover the five-entry loop's count and constant-register allocation while
 * preserving its record writes.
 * No matching credit.
 */
void func_1D8838(char *state)
{
    char *base = *(char **)(state + 0x58);
    char *records = base + 4;
    char *flags = base + 0x84;
    char *pointers = base + 0x68;
    unsigned int index;

    for (index = 0; index < 5; ++index, records += 0x14, ++flags, pointers += 4) {
        char *object = *(char **)pointers;
        if (object != 0 && *flags == 0) {
            object[0x45] = 12;
            *(int *)records = -1;
            *flags = 1;
        }
    }
}
