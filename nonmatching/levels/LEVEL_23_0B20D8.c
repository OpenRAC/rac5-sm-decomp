/* LEVEL_23.REL:0x0B20D8: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 108 bytes, first difference at +8.
 * Recheck the adjacent global layout and the guarded removal path. No matching credit.
 */
extern int D_002F9EC4;
extern int D_002F9EA0;
extern char D_002F9EA4[];
extern int *func_0B3980(char *);
extern void func_0B39A0(char *);

int func_0B20D8(int value)
{
    int *found;
    if (D_002F9EC4 == 0) return 0;
    found = func_0B3980(D_002F9EA4);
    if (*found == value) {
        func_0B39A0(D_002F9EA4);
        D_002F9EA0 = 0;
        return 1;
    }
    return 0;
}
