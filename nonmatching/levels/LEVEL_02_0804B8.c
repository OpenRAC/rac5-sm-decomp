/* LEVEL_02.REL:0x0804B8: reviewed 72-byte candidate.
 * pinned C with gnu-ee-trial links 72 bytes; first differs at +6.
 * Retry: Recover the count/index/pointer register allocation of the 24-byte table
 * scan without changing its semantics.
 * No matching credit.
 */
/* LEVEL_02.REL:0x0804B8: useful C candidate, no matching credit.
   Reopen when: Recover the count/index/pointer register allocation of the 24-byte table scan without changing its semantics. */
extern unsigned int D_0020B0D8;
extern int D_002519C0[];

int func_0804B8(int wanted)
{
    unsigned int index = 0;
    if (D_0020B0D8 != 0) {
        int *item = D_002519C0;
        do {
            index++;
            if (*item == wanted)
                return 1;
            item += 6;
        } while (index < D_0020B0D8);
    }
    return 0;
}
