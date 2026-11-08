/* LEVEL_02.REL:0x13B318: reviewed 52-byte candidate.
 * pinned C with gnu-ee-trial links 52 bytes; first differs at +24.
 * Retry: Recover the ordered record initialization and final delay-slot byte store
 * from a natural C layout.
 * No matching credit.
 */
void func_13B318(char *record, int base, int value, long long extra)
{
    int end = base + 8;

    *(int *)(record + 8) = value;
    *(int *)(record + 0x40) = 1;
    *(int *)(record + 0x3C) = end;
    *(long long *)(record + 0x28) = extra;
    *(long long *)(record + 0x30) = 0;
    *(int *)record = 0;
    *(long long *)(record + 0x10) = 0;
    *(int *)(record + 4) = base;
    *(long long *)(record + 0x20) = 0;
    record[0x38] = 0;
}
