/* USA LEVEL_10.REL:0x1E0320, 80-byte candidate (14 November 2026).
 * Measured gnu-ee-trial: 8 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern int func_017798(float f);
extern void func_1E0170(char *obj, int r, float f, int n);

void func_1E0320(char *a0, int a1, float f)
{
    float g;
    int r;

    g = f;
    r = func_017798(f);
    func_1E0170(a0, r, g, a1);
}
