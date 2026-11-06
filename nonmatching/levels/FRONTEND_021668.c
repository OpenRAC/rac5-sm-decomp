/* FRONTEND.REL:0x021668: Ghidra body 68 bytes.
 * Pinned pure C links 68 bytes and first differs at +23.
 * Recheck branch-likely selection and the second global store register. No matching credit.
 */
extern unsigned char D_00032850;
extern int D_00032848;
extern void func_021368(int);

int func_021668(void)
{
    if (D_00032850 == 0) {
        return 0;
    }
    func_021368(1);
    D_00032850 = 0;
    D_00032848 = 0;
    return 1;
}
