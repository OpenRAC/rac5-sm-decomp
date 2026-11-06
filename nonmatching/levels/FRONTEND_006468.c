/* FRONTEND.REL:0x006468: Ghidra body 80 bytes.
 * Pinned pure C links 72 bytes and first differs at +35.
 * Recheck ring index and target-array address scheduling. No matching credit.
 */
extern int func_007A58(void);
extern int D_0010EB40[];
extern unsigned int D_0002B020;
extern int D_0002B010;

void func_006468(void)
{
    int result = func_007A58();
    D_0010EB40[D_0002B020 & 0x1f] = result - D_0002B010;
}
