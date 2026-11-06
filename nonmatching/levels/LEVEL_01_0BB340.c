/* LEVEL_01.REL:0x0BB340: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 108 bytes, first difference at +8.
 * Recheck the adjacent global layout and the guarded removal path. No matching credit.
 */
extern int D_00328A84;
extern int D_00328A60;
extern char D_00328A64[];
extern int *func_0BCBE0(char *);
extern void func_0BCC00(char *);

int func_0BB340(int value)
{
    int *found;
    if (D_00328A84 == 0) return 0;
    found = func_0BCBE0(D_00328A64);
    if (*found == value) {
        func_0BCC00(D_00328A64);
        D_00328A60 = 0;
        return 1;
    }
    return 0;
}
