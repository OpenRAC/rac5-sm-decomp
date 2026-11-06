/* LEVEL_18.REL:0x079B40, bounded 64-byte retail body.
 * Pinned C links 72 bytes; first difference at body byte +20.
 * The conditional two-call path emits an extra branch. Reopen with the original return type and short-circuit structure.
 */
extern int func_079B00(void);
extern long long func_079AE0(void);

long long func_079B40(char *record)
{
    if (func_079B00() == 0 && *(int *)(record + 0x14) != 0)
        return func_079AE0();
    return 0;
}
