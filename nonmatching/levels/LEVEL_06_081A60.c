/* LEVEL_06.REL:0x081A60, bounded 64-byte retail body.
 * Pinned C links 72 bytes; first difference at body byte +20.
 * The conditional two-call path emits an extra branch. Reopen with the original return type and short-circuit structure.
 */
extern int func_081A20(void);
extern long long func_081A00(void);

long long func_081A60(char *record)
{
    if (func_081A20() == 0 && *(int *)(record + 0x14) != 0)
        return func_081A00();
    return 0;
}
