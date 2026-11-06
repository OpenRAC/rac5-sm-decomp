/* LEVEL_02.REL:0x0C1C50: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 108 bytes, first difference at +8.
 * Recheck the adjacent global layout and the guarded removal path. No matching credit.
 */
extern int D_0033FF84;
extern int D_0033FF60;
extern char D_0033FF64[];
extern int *func_0C34F0(char *);
extern void func_0C3510(char *);

int func_0C1C50(int value)
{
    int *found;
    if (D_0033FF84 == 0) return 0;
    found = func_0C34F0(D_0033FF64);
    if (*found == value) {
        func_0C3510(D_0033FF64);
        D_0033FF60 = 0;
        return 1;
    }
    return 0;
}
