/* USA LEVEL_10.REL:0x18E0E0, 172-byte candidate (14 November 2026).
 * Measured pinned: 2 differing words; first difference at 0x38.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern int D_00223780;
extern int func_026E08(int a, int b);
extern void func_026088(int a0, int a1, int a2, int a3, int a4, int a5, int a6);
extern void func_07CCA0(void *o, int on);

void func_18E0E0(void *o)
{
    int id = D_00223780;

    if (id == 0x16)
        id = 3;
    else if (id == 0x17)
        id = 6;
    if (func_026E08(id * 2 + 2, 0))
        func_026088(1, 0, 0, 0, 0, -1, 1);
    else
        func_026088(0, 0, 0, 0, 0, -1, 1);
    func_07CCA0(o, 1);
}
