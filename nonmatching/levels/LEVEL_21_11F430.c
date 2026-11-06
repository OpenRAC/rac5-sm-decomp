/* LEVEL_21.REL:0x11F430, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +26.
 * The conditional state clear differs in branch scheduling. Reopen with field types and call side-effect evidence.
 */
extern void func_115C28(void);

void func_11F430(char *record)
{
    *(int *)(record + 0xa0) = 4;
    *(int *)(record + 0xa4) = 0;
    if (*(int *)(record + 0x50) != 0) {
        func_115C28();
        *(int *)(record + 0x50) = 0;
    }
}
