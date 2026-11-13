/* USA LEVEL_10.REL:0x02B9E8, 112-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 112 linked bytes; first differing word +0xC.
 * Unaccepted; no matching credit. Recover the resource and table-entry aggregate declarations; the remaining differences are address/register scheduling.
 */
extern char D_1FD4B0[], D_23AB70[];
extern char *D_20F9F0;
void *func_02B9E8(char *object)
{
    char *record;
    unsigned int slot;
    char *table;
    if ((unsigned char)object[2] != 2)
        return 0;
    record = *(char **)(object + 4);
    if (*(char **)(record + 0x40) != D_1FD4B0)
        return 0;
    slot = (unsigned char)D_23AB70[(unsigned char)record[0x44] + 8];
    table = *(char **)(D_20F9F0 + 0x24) + slot * 24;
    return *(char **)(table + 0x10) + *(unsigned short *)(record + 0x46) * 4;
}
