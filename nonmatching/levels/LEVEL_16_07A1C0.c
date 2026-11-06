/* LEVEL_16.REL:0x07A1C0, bounded 64-byte retail body.
 * Pinned C links 72 bytes; first difference at body byte +20.
 * The conditional two-call path emits an extra branch. Reopen with the original return type and short-circuit structure.
 */
extern int func_07A180(void);
extern long long func_07A160(void);

long long func_07A1C0(char *record)
{
    if (func_07A180() == 0 && *(int *)(record + 0x14) != 0)
        return func_07A160();
    return 0;
}
