/* LEVEL_09.REL:0x0B85F0: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 108 bytes, first difference at +8.
 * Recheck the adjacent global layout and the guarded removal path. No matching credit.
 */
extern int D_00310204;
extern int D_003101E0;
extern char D_003101E4[];
extern int *func_0B9E90(char *);
extern void func_0B9EB0(char *);

int func_0B85F0(int value)
{
    int *found;
    if (D_00310204 == 0) return 0;
    found = func_0B9E90(D_003101E4);
    if (*found == value) {
        func_0B9EB0(D_003101E4);
        D_003101E0 = 0;
        return 1;
    }
    return 0;
}
