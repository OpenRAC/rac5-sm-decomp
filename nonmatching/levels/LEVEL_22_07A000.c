/* LEVEL_22.REL:0x07A000, bounded 64-byte retail body.
 * Pinned C links 72 bytes; first difference at body byte +20.
 * The conditional two-call path emits an extra branch. Reopen with the original return type and short-circuit structure.
 */
extern int func_079FC0(void);
extern long long func_079FA0(void);

long long func_07A000(char *record)
{
    if (func_079FC0() == 0 && *(int *)(record + 0x14) != 0)
        return func_079FA0();
    return 0;
}
