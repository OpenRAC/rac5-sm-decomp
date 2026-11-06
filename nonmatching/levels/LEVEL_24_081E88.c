/* LEVEL_24.REL:0x081E88, bounded 64-byte retail body.
 * Pinned C links 72 bytes; first difference at body byte +20.
 * The conditional two-call path emits an extra branch. Reopen with the original return type and short-circuit structure.
 */
extern int func_081E48(void);
extern long long func_081E28(void);

long long func_081E88(char *record)
{
    if (func_081E48() == 0 && *(int *)(record + 0x14) != 0)
        return func_081E28();
    return 0;
}
