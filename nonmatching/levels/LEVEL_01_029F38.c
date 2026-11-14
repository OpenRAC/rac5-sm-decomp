/* USA LEVEL_01.REL:0x029F38, 104-byte candidate (14 November 2026).
 * Measured pinned: 9 differing words; first difference at 0x10.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Obj {
    char pad_00[0x18];
    int w_18;
};

extern struct Obj *D_002313A8;

void DelayThread(int a0);

void func_029F38(void)
{
    if ((D_002313A8->w_18 ^ 3) != 0) {
        do {
            DelayThread(0x320);
        } while (D_002313A8->w_18 != 3);
    }
    D_002313A8->w_18 = 4;
}
