/* USA LEVEL_15.REL:0x0F7B70, 96-byte candidate (14 November 2026).
 * Measured pinned: 19 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern int D_0015B714;
extern void func_132658(void);

int func_0F7B70(char *a0)
{
    int *p = *(int **)(a0 + 0x54);
    int i;
    int v;
    int ok;

    for (i = 0; i < 1; i++) {
        v = *p;
        if (v == 0) {
            ok = 0;
        } else {
            ok = 1;
        }
        *p = D_0015B714 + v;
        if (ok == 0) {
            *p = 0;
        }
        p++;
    }
    func_132658();
}
