/* LEVEL_01.REL:0x0BB2F0: Ghidra body 80 bytes.
 * Pinned pure C links 84 bytes and first differs at +0.
 * Recheck the stack result and global address construction. No matching credit.
 */
extern int D_00328A84;
extern int D_00328A60;
extern void func_0BCBA0(void *, int *);
extern void func_0BCA80(void);

int func_0BB2F0(void)
{
    int result;
    if (D_00328A84 == 0) {
        result = 0;
    } else {
        func_0BCBA0((char *)&D_00328A60 + 4, &result);
        D_00328A60 = result;
        func_0BCA80();
    }
    return result;
}
