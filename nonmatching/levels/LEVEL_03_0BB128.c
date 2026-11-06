/* LEVEL_03.REL:0x0BB128: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 108 bytes, first difference at +8.
 * Recheck the adjacent global layout and the guarded removal path. No matching credit.
 */
extern int D_00343904;
extern int D_003438E0;
extern char D_003438E4[];
extern int *func_0BC9C8(char *);
extern void func_0BC9E8(char *);

int func_0BB128(int value)
{
    int *found;
    if (D_00343904 == 0) return 0;
    found = func_0BC9C8(D_003438E4);
    if (*found == value) {
        func_0BC9E8(D_003438E4);
        D_003438E0 = 0;
        return 1;
    }
    return 0;
}
