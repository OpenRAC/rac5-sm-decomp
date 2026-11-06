/* LEVEL_22.REL:0x0A97E8: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 108 bytes, first difference at +8.
 * Recheck the adjacent global layout and the guarded removal path. No matching credit.
 */
extern int D_0027E644;
extern int D_0027E620;
extern char D_0027E624[];
extern int *func_0AB090(char *);
extern void func_0AB0B0(char *);

int func_0A97E8(int value)
{
    int *found;
    if (D_0027E644 == 0) return 0;
    found = func_0AB090(D_0027E624);
    if (*found == value) {
        func_0AB0B0(D_0027E624);
        D_0027E620 = 0;
        return 1;
    }
    return 0;
}
