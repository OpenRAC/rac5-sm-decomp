/* LEVEL_01.REL:0x133CC8: Ghidra body 72 bytes.
 * Pinned pure C links 76 bytes and first differs at +12.
 * Recheck global flag lifetime and call/store order. No matching credit.
 */
extern unsigned char D_00207088;
extern int D_00207080;
extern void func_133F70(void);
extern void func_133A98(int);

int func_133CC8(void)
{
    int active = D_00207088 != 0;
    if (active) {
        func_133F70();
        D_00207080 = 2;
        func_133A98(1);
    }
    return active;
}
