/* LEVEL_20.REL:0x0E7E20, bounded 64-byte retail body.
 * Pinned C links 52 bytes; first difference at body byte +5.
 * The two-entry status scan differs in base pointer and counter allocation. Reopen with the original record layout.
 */
extern unsigned int D_00202F24[];

int func_0E7E20(void)
{
    int count = 0;
    int index;
    for (index = 0; index < 2; index++)
        if ((D_00202F24[index * 7] & 2) != 0) count++;
    return count < 2;
}
