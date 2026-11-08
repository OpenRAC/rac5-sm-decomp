/* LEVEL_01.REL:0x055BC8: reviewed 112-byte candidate.
 * pinned C with gnu-ee-trial links 108 bytes; first differs at +20.
 * Retry: Recover the boolean temporary's width and lifetime so both conversion
 * instructions and the nested branch layout remain.
 * No matching credit.
 */
extern int func_023B38(void *);
extern void func_023B70(void *);

void func_055BC8(char *record)
{
    int should_call;

    if (*(int *)(record + 0x5A4) == 0)
        return;

    should_call = 0;
    if (*(unsigned char *)(record + 0x9CD) != 0)
        should_call = *(int *)(record + 0x9A0) != 1;
    if ((unsigned char)should_call != 0 && func_023B38(record) == 2)
        func_023B70(record);
}
