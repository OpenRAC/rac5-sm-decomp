/* USA LEVEL_04.REL:0x185A60, 128-byte candidate (14 November 2026).
 * Measured pinned: 0 differing words; first difference at prototype-conflict.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern unsigned int D_002B25E8;
extern unsigned int D_003B0718;
extern int D_002211FC;
extern float D_00221200[];
extern char D_00221218[];

extern int func_1FE0C0(unsigned int word);
extern void func_1FE018(char *block, unsigned int word);

void func_185A60(void)
{
    float *span;

    D_003B0718 = (D_002B25E8 << 16) | 0xA0006044U;
    D_002211FC = func_1FE0C0(D_003B0718);
    func_1FE018(D_00221218, D_003B0718);
    span = D_00221200;
    span[5] = (span[4] - span[3]) * 0x1p-31f;
}
