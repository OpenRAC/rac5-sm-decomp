/* LEVEL_17.REL:0x0A98D0: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 108 bytes, first difference at +8.
 * Recheck the adjacent global layout and the guarded removal path. No matching credit.
 */
extern int D_00267CC4;
extern int D_00267CA0;
extern char D_00267CA4[];
extern int *func_0AB5B0(char *);
extern void func_0AB5D0(char *);

int func_0A98D0(int value)
{
    int *found;
    if (D_00267CC4 == 0) return 0;
    found = func_0AB5B0(D_00267CA4);
    if (*found == value) {
        func_0AB5D0(D_00267CA4);
        D_00267CA0 = 0;
        return 1;
    }
    return 0;
}
