/* LEVEL_01.REL:0x04C168: reviewed 104-byte candidate.
 * pinned C with gnu-ee-trial links 104 bytes; first differs at +62.
 * Retry: Recover the tail register allocation and conditional return schedule after
 * the two local calls and global comparison.
 * No matching credit.
 */
extern int func_028BD8(void);
extern char *func_027FF0(unsigned int index);
extern char *D_001F3FAC;

int func_04C168(char *object)
{
    int maximum = func_028BD8();
    unsigned int index = *(unsigned int *)(object + 0xFC8);
    char *next;
    int result;
    if (index >= (unsigned int)maximum - 1U)
        return 0;
    next = func_027FF0(index + 1U);
    if (next == 0)
        return 0;
    result = 1;
    if (*(int *)(next + 4) > *(int *)(D_001F3FAC + 0x1C74))
        result = 0;
    return result;
}
