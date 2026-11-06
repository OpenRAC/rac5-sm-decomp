/* LEVEL_15.REL:0x06D2C8, bounded 64-byte retail body.
 * Pinned C links 72 bytes; first difference at body byte +20.
 * The conditional two-call path emits an extra branch. Reopen with the original return type and short-circuit structure.
 */
extern int func_06D288(void);
extern long long func_06D268(void);

long long func_06D2C8(char *record)
{
    if (func_06D288() == 0 && *(int *)(record + 0x14) != 0)
        return func_06D268();
    return 0;
}
