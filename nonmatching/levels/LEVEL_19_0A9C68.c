/* LEVEL_19.REL:0x0A9C68: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 108 bytes, first difference at +8.
 * Recheck the adjacent global layout and the guarded removal path. No matching credit.
 */
extern int D_00276B44;
extern int D_00276B20;
extern char D_00276B24[];
extern int *func_0AB948(char *);
extern void func_0AB968(char *);

int func_0A9C68(int value)
{
    int *found;
    if (D_00276B44 == 0) return 0;
    found = func_0AB948(D_00276B24);
    if (*found == value) {
        func_0AB968(D_00276B24);
        D_00276B20 = 0;
        return 1;
    }
    return 0;
}
