/* LEVEL_17.REL:0x114C38, bounded 64-byte retail body.
 * Pinned C links 52 bytes; first difference at body byte +5.
 * The two-entry status scan differs in base pointer and counter allocation. Reopen with the original record layout.
 */
extern unsigned int D_002D0CCC[];

int func_114C38(void)
{
    int count = 0;
    int index;
    for (index = 0; index < 2; index++)
        if ((D_002D0CCC[index * 7] & 2) != 0) count++;
    return count < 2;
}
