/* LEVEL_08.REL:0x1FAAF8, bounded 64-byte retail body.
 * Pinned C links 60 bytes; first difference at body byte +20.
 * The conditional message dispatch differs in argument and pointer setup. Reopen with the callee prototype and message data layout.
 */
extern char D_001FC570[];
extern void func_0C0820(void *, long long, long long, int, int);

void func_1FAAF8(char *record)
{
    if (*(int *)(*(char **)(record + 0x58) + 0x40) != 0)
        func_0C0820(D_001FC570, (long long)record, -1, 3, 0x1d5);
}
