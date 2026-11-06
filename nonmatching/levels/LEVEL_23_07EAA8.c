/* LEVEL_23.REL:0x07EAA8, bounded 64-byte retail body.
 * Pinned C links 72 bytes; first difference at body byte +20.
 * The conditional two-call path emits an extra branch. Reopen with the original return type and short-circuit structure.
 */
extern int func_07EA68(void);
extern long long func_07EA48(void);

long long func_07EAA8(char *record)
{
    if (func_07EA68() == 0 && *(int *)(record + 0x14) != 0)
        return func_07EA48();
    return 0;
}
