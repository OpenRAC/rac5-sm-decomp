/* LEVEL_04.REL:0x0C0B20: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 108 bytes, first difference at +8.
 * Recheck the adjacent global layout and the guarded removal path. No matching credit.
 */
extern int D_00343284;
extern int D_00343260;
extern char D_00343264[];
extern int *func_0C23F8(char *);
extern void func_0C2418(char *);

int func_0C0B20(int value)
{
    int *found;
    if (D_00343284 == 0) return 0;
    found = func_0C23F8(D_00343264);
    if (*found == value) {
        func_0C2418(D_00343264);
        D_00343260 = 0;
        return 1;
    }
    return 0;
}
