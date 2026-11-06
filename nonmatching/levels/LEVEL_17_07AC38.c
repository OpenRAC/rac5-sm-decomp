/* LEVEL_17.REL:0x07AC38, bounded 64-byte retail body.
 * Pinned C links 72 bytes; first difference at body byte +20.
 * The conditional two-call path emits an extra branch. Reopen with the original return type and short-circuit structure.
 */
extern int func_07ABF8(void);
extern long long func_07ABD8(void);

long long func_07AC38(char *record)
{
    if (func_07ABF8() == 0 && *(int *)(record + 0x14) != 0)
        return func_07ABD8();
    return 0;
}
