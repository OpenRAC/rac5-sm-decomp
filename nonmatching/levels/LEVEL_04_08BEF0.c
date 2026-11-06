/* LEVEL_04.REL:0x08BEF0, bounded 64-byte retail body.
 * Pinned C links 72 bytes; first difference at body byte +20.
 * The conditional two-call path emits an extra branch. Reopen with the original return type and short-circuit structure.
 */
extern int func_08BEB0(void);
extern long long func_08BE90(void);

long long func_08BEF0(char *record)
{
    if (func_08BEB0() == 0 && *(int *)(record + 0x14) != 0)
        return func_08BE90();
    return 0;
}
