/* LEVEL_18.REL:0x0A9368: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 108 bytes, first difference at +8.
 * Recheck the adjacent global layout and the guarded removal path. No matching credit.
 */
extern int D_00276D44;
extern int D_00276D20;
extern char D_00276D24[];
extern int *func_0AB048(char *);
extern void func_0AB068(char *);

int func_0A9368(int value)
{
    int *found;
    if (D_00276D44 == 0) return 0;
    found = func_0AB048(D_00276D24);
    if (*found == value) {
        func_0AB068(D_00276D24);
        D_00276D20 = 0;
        return 1;
    }
    return 0;
}
