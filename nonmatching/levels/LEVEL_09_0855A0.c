/* LEVEL_09.REL:0x0855A0, bounded 64-byte retail body.
 * Pinned C links 72 bytes; first difference at body byte +20.
 * The conditional two-call path emits an extra branch. Reopen with the original return type and short-circuit structure.
 */
extern int func_085560(void);
extern long long func_085540(void);

long long func_0855A0(char *record)
{
    if (func_085560() == 0 && *(int *)(record + 0x14) != 0)
        return func_085540();
    return 0;
}
