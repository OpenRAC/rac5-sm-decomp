/* LEVEL_05.REL:0x0B98E8: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 108 bytes, first difference at +8.
 * Recheck the adjacent global layout and the guarded removal path. No matching credit.
 */
extern int D_00314944;
extern int D_00314920;
extern char D_00314924[];
extern int *func_0BB188(char *);
extern void func_0BB1A8(char *);

int func_0B98E8(int value)
{
    int *found;
    if (D_00314944 == 0) return 0;
    found = func_0BB188(D_00314924);
    if (*found == value) {
        func_0BB1A8(D_00314924);
        D_00314920 = 0;
        return 1;
    }
    return 0;
}
