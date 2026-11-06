/* LEVEL_10.REL:0x088F80, bounded 64-byte retail body.
 * Pinned C links 72 bytes; first difference at body byte +20.
 * The conditional two-call path emits an extra branch. Reopen with the original return type and short-circuit structure.
 */
extern int func_088F10(void);
extern long long func_088EF0(void);

long long func_088F80(char *record)
{
    if (func_088F10() == 0 && *(int *)(record + 0x14) != 0)
        return func_088EF0();
    return 0;
}
