/* FRONTEND.REL:0x021438: Ghidra body 80 bytes.
 * Pinned pure C links 72 bytes and first differs at +32.
 * Recheck the redundant retail state guard without purposeless C conditions. No matching credit.
 */
extern int D_00032830;
extern int *D_0003282C;

int func_021438(int value)
{
    if (D_00032830 == 0)
        return 0;
    if (value != D_00032830)
        return 0;
    if (D_0003282C[1] != 1)
        return 0;
    D_0003282C[1] = 2;
    return 1;
}
