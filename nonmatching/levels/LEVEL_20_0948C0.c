/* LEVEL_20.REL:0x0948C0: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 108 bytes, first difference at +8.
 * Recheck the adjacent global layout and the guarded removal path. No matching credit.
 */
extern int D_0019A204;
extern int D_0019A1E0;
extern char D_0019A1E4[];
extern int *func_0965A0(char *);
extern void func_0965C0(char *);

int func_0948C0(int value)
{
    int *found;
    if (D_0019A204 == 0) return 0;
    found = func_0965A0(D_0019A1E4);
    if (*found == value) {
        func_0965C0(D_0019A1E4);
        D_0019A1E0 = 0;
        return 1;
    }
    return 0;
}
