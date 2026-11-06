/* LEVEL_01.REL:0x053BE8: Ghidra body 100 bytes.
 * Pinned pure C links 92 bytes and first differs at +0.
 * Recheck global hash-call arguments and result store order. No matching credit.
 */
extern int func_109DB8(unsigned int);
extern int D_001F47CC;
extern int D_001F47D0;
extern int D_00297E2C;
extern int D_00297DEC;

void func_053BE8(void)
{
    D_001F47CC = func_109DB8((D_00297E2C << 16) | 0xa00010c1U);
    D_001F47D0 = func_109DB8((D_00297DEC << 16) | 0xa00010c1U);
}
