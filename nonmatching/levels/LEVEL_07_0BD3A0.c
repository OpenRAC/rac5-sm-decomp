/* LEVEL_07.REL:0x0BD3A0: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 108 bytes, first difference at +8.
 * Recheck the adjacent global layout and the guarded removal path. No matching credit.
 */
extern int D_0033E384;
extern int D_0033E360;
extern char D_0033E364[];
extern int *func_0BEC40(char *);
extern void func_0BEC60(char *);

int func_0BD3A0(int value)
{
    int *found;
    if (D_0033E384 == 0) return 0;
    found = func_0BEC40(D_0033E364);
    if (*found == value) {
        func_0BEC60(D_0033E364);
        D_0033E360 = 0;
        return 1;
    }
    return 0;
}
