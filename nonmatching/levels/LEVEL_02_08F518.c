/* LEVEL_02.REL:0x08F518, bounded 64-byte retail body.
 * Pinned C links 72 bytes; first difference at body byte +20.
 * The conditional two-call path emits an extra branch. Reopen with the original return type and short-circuit structure.
 */
extern int func_08F4D8(void);
extern long long func_08F4B8(void);

long long func_08F518(char *record)
{
    if (func_08F4D8() == 0 && *(int *)(record + 0x14) != 0)
        return func_08F4B8();
    return 0;
}
