/* LEVEL_08.REL:0x028D48, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +5.
 * The pinned compiler links 56 bytes but folds the global table base and field offset and changes the four-entry loop registers. Reopen with the original table layout or a qualified compiler route.
 */
extern int D_002801E0[];

int func_028D48(int value)
{
    int *entry = D_002801E0 + 1;
    unsigned int index = 0;
    do {
        ++index;
        if (*entry == value) return 1;
        ++entry;
    } while (index < 4);
    return 0;
}
