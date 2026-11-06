/* LEVEL_07.REL:0x028B30, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +5.
 * The pinned compiler links 56 bytes but folds the global table base and field offset and changes the four-entry loop registers. Reopen with the original table layout or a qualified compiler route.
 */
extern int D_00246860[];

int func_028B30(int value)
{
    int *entry = D_00246860 + 1;
    unsigned int index = 0;
    do {
        ++index;
        if (*entry == value) return 1;
        ++entry;
    } while (index < 4);
    return 0;
}
