/* LEVEL_21.REL:0x09B988: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 108 bytes, first difference at +8.
 * Recheck the adjacent global layout and the guarded removal path. No matching credit.
 */
extern int D_002402C4;
extern int D_002402A0;
extern char D_002402A4[];
extern int *func_09D228(char *);
extern void func_09D248(char *);

int func_09B988(int value)
{
    int *found;
    if (D_002402C4 == 0) return 0;
    found = func_09D228(D_002402A4);
    if (*found == value) {
        func_09D248(D_002402A4);
        D_002402A0 = 0;
        return 1;
    }
    return 0;
}
