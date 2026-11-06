/* LEVEL_20.REL:0x067E30, bounded 64-byte retail body.
 * Pinned C links 72 bytes; first difference at body byte +20.
 * The conditional two-call path emits an extra branch. Reopen with the original return type and short-circuit structure.
 */
extern int func_067DF0(void);
extern long long func_067DD0(void);

long long func_067E30(char *record)
{
    if (func_067DF0() == 0 && *(int *)(record + 0x14) != 0)
        return func_067DD0();
    return 0;
}
