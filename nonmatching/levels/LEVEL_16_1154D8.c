/* LEVEL_16.REL:0x1154D8, bounded 64-byte retail body.
 * Pinned C links 52 bytes; first difference at body byte +5.
 * The two-entry status scan differs in base pointer and counter allocation. Reopen with the original record layout.
 */
extern unsigned int D_002DF9CC[];

int func_1154D8(void)
{
    int count = 0;
    int index;
    for (index = 0; index < 2; index++)
        if ((D_002DF9CC[index * 7] & 2) != 0) count++;
    return count < 2;
}
