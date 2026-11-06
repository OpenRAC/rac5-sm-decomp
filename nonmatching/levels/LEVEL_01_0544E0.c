/* LEVEL_01.REL:0x0544E0: Ghidra body 76 bytes.
 * Pinned pure C links 76 bytes and first differs at +4.
 * Recheck kind signedness and branch schedule around the call. No matching credit.
 */
extern void func_06AB98(void);

void func_0544E0(char *record)
{
    unsigned int kind = *(unsigned short *)(record + 0x108);
    if (kind == 9) {
        func_06AB98();
    } else {
        *(int *)(record + 0xc6c) =
            (unsigned short)(kind - 2) > 1 ? 7 : 8;
    }
}
