/* LEVEL_01.REL:0x0BC4D0: Ghidra body 92 bytes.
 * Pinned pure C links 92 bytes and first differs at +4.
 * Recheck adjacent global field layout and branch-likely selection. No matching credit.
 */
extern int D_00328A40[];

void func_0BC4D0(void)
{
    if (*((char *)D_00328A40 + 0x1c) == 0) {
        if (*((char *)D_00328A40 + 0x0d) == 0) {
            D_00328A40[2] = D_00328A40[0];
        } else {
            D_00328A40[2] = 0;
            *((char *)D_00328A40 + 0x0d) = 0;
        }
    } else if (D_00328A40[8] != 0) {
        D_00328A40[1] = D_00328A40[8];
    }
    D_00328A40[8] = 0;
    D_00328A40[0] = D_00328A40[1];
    D_00328A40[1] = 0;
}
