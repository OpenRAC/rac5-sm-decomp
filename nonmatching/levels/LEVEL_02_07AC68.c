/* LEVEL_02.REL:0x07AC68: reviewed 68-byte candidate.
 * pinned C with gnu-ee-trial links 68 bytes; first differs at +8.
 * Retry: Recover context/value saved-register allocation; current C links 68 bytes
 * but first differs at +8; callee is a verified zero-argument routine.
 * No matching credit.
 */
extern char *func_07B648(void);

void func_07AC68(char *context, int value)
{
    char *entry = func_07B648();
    if (entry)
        *(int *)(entry + 4) = value;
    else
        *(int *)(*(char **)(context + 0x48) + 0xDC) = value;
}
