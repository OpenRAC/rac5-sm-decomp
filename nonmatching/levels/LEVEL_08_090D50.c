/* LEVEL_08.REL:0x090D50, bounded 64-byte retail body.
 * Pinned C links 72 bytes; first difference at body byte +20.
 * The conditional two-call path emits an extra branch. Reopen with the original return type and short-circuit structure.
 */
extern int func_090D10(void);
extern long long func_090CF0(void);

long long func_090D50(char *record)
{
    if (func_090D10() == 0 && *(int *)(record + 0x14) != 0)
        return func_090CF0();
    return 0;
}
