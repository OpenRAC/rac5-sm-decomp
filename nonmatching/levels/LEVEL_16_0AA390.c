/* LEVEL_16.REL:0x0AA390: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 108 bytes, first difference at +8.
 * Recheck the adjacent global layout and the guarded removal path. No matching credit.
 */
extern int D_002769C4;
extern int D_002769A0;
extern char D_002769A4[];
extern int *func_0AC070(char *);
extern void func_0AC090(char *);

int func_0AA390(int value)
{
    int *found;
    if (D_002769C4 == 0) return 0;
    found = func_0AC070(D_002769A4);
    if (*found == value) {
        func_0AC090(D_002769A4);
        D_002769A0 = 0;
        return 1;
    }
    return 0;
}
