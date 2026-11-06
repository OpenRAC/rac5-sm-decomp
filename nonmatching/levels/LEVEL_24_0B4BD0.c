/* LEVEL_24.REL:0x0B4BD0: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 108 bytes, first difference at +8.
 * Recheck the adjacent global layout and the guarded removal path. No matching credit.
 */
extern int D_002F4944;
extern int D_002F4920;
extern char D_002F4924[];
extern int *func_0B64A8(char *);
extern void func_0B64C8(char *);

int func_0B4BD0(int value)
{
    int *found;
    if (D_002F4944 == 0) return 0;
    found = func_0B64A8(D_002F4924);
    if (*found == value) {
        func_0B64C8(D_002F4924);
        D_002F4920 = 0;
        return 1;
    }
    return 0;
}
