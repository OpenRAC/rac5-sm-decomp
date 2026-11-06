/* LEVEL_08.REL:0x0C6230: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 108 bytes, first difference at +8.
 * Recheck the adjacent global layout and the guarded removal path. No matching credit.
 */
extern int D_00377D04;
extern int D_00377CE0;
extern char D_00377CE4[];
extern int *func_0C7B08(char *);
extern void func_0C7B28(char *);

int func_0C6230(int value)
{
    int *found;
    if (D_00377D04 == 0) return 0;
    found = func_0C7B08(D_00377CE4);
    if (*found == value) {
        func_0C7B28(D_00377CE4);
        D_00377CE0 = 0;
        return 1;
    }
    return 0;
}
