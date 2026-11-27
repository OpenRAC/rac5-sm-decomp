/* LEVEL_01:0x171330 -- returns 0 when the linked entry is inactive, else 1 for state 1, the low-nibble-equals-1 test of the sub record for state 0, and 0 otherwise. */
int func_171330(char *record)
{
    char *entry = *(char **)(record + 0x58);

    if (*(int *)(entry + 0x58) == 0)
        return 0;
    switch (*(int *)(entry + 0x1C)) {
    case 0:
        return (*(unsigned int *)(*(char **)(entry + 0x20) + 0x64) & 0xF) == 1;
    case 1:
        return 1;
    default:
        return 0;
    }
}
