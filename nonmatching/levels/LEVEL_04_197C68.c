/* USA LEVEL_04.REL:0x197C68, 144-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 124 linked bytes; first differing word +0xC.
 * Unaccepted; no matching credit. Recover the search helper inlining and caller arguments. Accepted callers currently omit the consumed object argument.
 */
extern char *D_2201B0;
extern int func_07F9D0(char *record, int tag, char *object, int mode);
int func_197C68(char *object)
{
    unsigned int i = 0, count = *(unsigned int *)(D_2201B0 + 0x38);
    char *record = *(char **)(D_2201B0 + 0x34);
    char *found = 0;
    while (i < count) {
        if (*(unsigned int *)(record + 0x24) == 0x66B80B74U) {
            found = record;
            break;
        }
        ++i;
        record += 0x44;
    }
    if (found)
        return func_07F9D0(found, 0x66B80B74, object, 255);
    return 0;
}
