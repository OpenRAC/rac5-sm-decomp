/* LEVEL_19.REL:0x07A6A8, bounded 64-byte retail body.
 * Pinned C links 72 bytes; first difference at body byte +20.
 * The conditional two-call path emits an extra branch. Reopen with the original return type and short-circuit structure.
 */
extern int func_07A668(void);
extern long long func_07A648(void);

long long func_07A6A8(char *record)
{
    if (func_07A668() == 0 && *(int *)(record + 0x14) != 0)
        return func_07A648();
    return 0;
}
