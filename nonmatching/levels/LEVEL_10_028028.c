/* LEVEL_10.REL:0x028028, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +5.
 * The pinned compiler links 56 bytes but folds the global table base and field offset and changes the four-entry loop registers. Reopen with the original table layout or a qualified compiler route.
 */
extern int D_0023A360[];

int func_028028(int value)
{
    int *entry = D_0023A360 + 1;
    unsigned int index = 0;
    do {
        ++index;
        if (*entry == value) return 1;
        ++entry;
    } while (index < 4);
    return 0;
}
