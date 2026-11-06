/* LEVEL_01.REL:0x088BE8, bounded 64-byte retail body.
 * Pinned C links 72 bytes; first difference at body byte +20.
 * The conditional two-call path emits an extra branch. Reopen with the original return type and short-circuit structure.
 */
extern int func_088BA8(void);
extern long long func_088B88(void);

long long func_088BE8(char *record)
{
    if (func_088BA8() == 0 && *(int *)(record + 0x14) != 0)
        return func_088B88();
    return 0;
}
