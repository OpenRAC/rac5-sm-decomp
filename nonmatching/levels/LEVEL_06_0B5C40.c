/* LEVEL_06.REL:0x0B5C40: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 108 bytes, first difference at +8.
 * Recheck the adjacent global layout and the guarded removal path. No matching credit.
 */
extern int D_00315804;
extern int D_003157E0;
extern char D_003157E4[];
extern int *func_0B74E0(char *);
extern void func_0B7500(char *);

int func_0B5C40(int value)
{
    int *found;
    if (D_00315804 == 0) return 0;
    found = func_0B74E0(D_003157E4);
    if (*found == value) {
        func_0B7500(D_003157E4);
        D_003157E0 = 0;
        return 1;
    }
    return 0;
}
