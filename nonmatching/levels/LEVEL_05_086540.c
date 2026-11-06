/* LEVEL_05.REL:0x086540, bounded 64-byte retail body.
 * Pinned C links 72 bytes; first difference at body byte +20.
 * The conditional two-call path emits an extra branch. Reopen with the original return type and short-circuit structure.
 */
extern int func_086500(void);
extern long long func_0864E0(void);

long long func_086540(char *record)
{
    if (func_086500() == 0 && *(int *)(record + 0x14) != 0)
        return func_0864E0();
    return 0;
}
