/* LEVEL_02.REL:0x040CA0: reviewed 80-byte candidate.
 * pinned C with gnu-ee-trial links 80 bytes; first differs at +8.
 * Retry: Recover the source or qualified schedule that moves the object-pointer save
 * before the second callee-saved-register store; three source/ABI variants and
 * qualified cc1 routes preserve the swap.
 * No matching credit.
 */
extern void func_040D18(void);
extern void func_0033A8(unsigned long long value);

void func_040CA0(char *object, void *context)
{
    func_040D18();
    *(unsigned long long *)(object + 0x960) |= 0x1000000000ULL;
    if (context != 0)
        func_0033A8(0);
}
