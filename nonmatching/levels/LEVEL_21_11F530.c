/* LEVEL_21.REL:0x11F530, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +30.
 * The conditional secondary call differs after the first call. Reopen with the first callee prototype and record types.
 */
extern void func_12B488(char *, int);
extern void func_115C28(void);

void func_11F530(char *first, char *second)
{
    func_12B488(first + 0x88, *(int *)(second + 0x68));
    if (*(int *)(first + 0x4c) != 0) func_115C28();
}
