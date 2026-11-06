/* LEVEL_07.REL:0x08ACB8, bounded 64-byte retail body.
 * Pinned C links 72 bytes; first difference at body byte +20.
 * The conditional two-call path emits an extra branch. Reopen with the original return type and short-circuit structure.
 */
extern int func_08AC78(void);
extern long long func_08AC58(void);

long long func_08ACB8(char *record)
{
    if (func_08AC78() == 0 && *(int *)(record + 0x14) != 0)
        return func_08AC58();
    return 0;
}
