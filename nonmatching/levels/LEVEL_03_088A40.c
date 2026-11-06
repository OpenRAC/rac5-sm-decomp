/* LEVEL_03.REL:0x088A40, bounded 64-byte retail body.
 * Pinned C links 72 bytes; first difference at body byte +20.
 * The conditional two-call path emits an extra branch. Reopen with the original return type and short-circuit structure.
 */
extern int func_088A00(void);
extern long long func_0889E0(void);

long long func_088A40(char *record)
{
    if (func_088A00() == 0 && *(int *)(record + 0x14) != 0)
        return func_0889E0();
    return 0;
}
