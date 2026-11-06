/* FRONTEND.REL:0x0125A8: Ghidra body 68 bytes.
 * Pinned pure C links 76 bytes and first differs at +40.
 * Recheck signed division result and field-store lifetime. No matching credit.
 */
extern int func_0125F0(void);

void func_0125A8(char *record)
{
    *(int *)(record + 0x74) =
        *(int *)(record + 0x54) - *(int *)(record + 0x50);
    *(int *)(record + 0x74) /= func_0125F0();
}
