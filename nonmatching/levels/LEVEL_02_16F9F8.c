/* LEVEL_02.REL:0x16F9F8, bounded 48-byte body.
 * Pinned C links 48 bytes but first differs at byte +14:
 * the nested condition loads into a different register.
 * Reopen: recover the original condition/value lifetime or
 * a qualified compiler route. A direct expression and five
 * other cc1 routes did not select the retail register.
 */
extern int func_1DB570(void);

int func_16F9F8(char *record)
{
    char *nested = *(char **)(record + 0x54);
    if (*(int *)(nested + 0x24) != 0)
        return func_1DB570() != 0;
    return 0;
}
