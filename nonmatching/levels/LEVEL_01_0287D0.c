/* LEVEL_01.REL:0x0287D0, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +5.
 * The pinned compiler links 56 bytes but folds the global table base and field offset in the four-entry scan. Reopen with original table layout or a qualified compiler route.
 */
extern int D_00230F64[];

int func_0287D0(int value)
{
    int *entry = D_00230F64;
    unsigned int index = 0;
    do {
        ++index;
        if (*entry == value) return 1;
        ++entry;
    } while (index < 4);
    return 0;
}
