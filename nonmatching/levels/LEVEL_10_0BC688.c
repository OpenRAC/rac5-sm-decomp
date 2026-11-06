/* LEVEL_10.REL:0x0BC688: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 108 bytes, first difference at +8.
 * Recheck the adjacent global layout and the guarded removal path. No matching credit.
 */
extern int D_00331E84;
extern int D_00331E60;
extern char D_00331E64[];
extern int *func_0BDF30(char *);
extern void func_0BDF50(char *);

int func_0BC688(int value)
{
    int *found;
    if (D_00331E84 == 0) return 0;
    found = func_0BDF30(D_00331E64);
    if (*found == value) {
        func_0BDF50(D_00331E64);
        D_00331E60 = 0;
        return 1;
    }
    return 0;
}
