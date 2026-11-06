/* LEVEL_16.REL:0x160F10, bounded 56-byte retail body.
 * Pinned C links 52 bytes; first difference at body byte +10.
 * The pinned compiler links 52 bytes and shortens the conditional boolean-result transfer. Reopen with the original return-value lifetime or qualified compiler route.
 */
extern int func_160E40(void);
int func_160F10(char *record)
{
    char *nested = *(char **)(record + 0x58);
    int result = 0;
    if (*(int *)(nested + 0xa4) != 0)
        result = func_160E40() != 0;
    return result;
}