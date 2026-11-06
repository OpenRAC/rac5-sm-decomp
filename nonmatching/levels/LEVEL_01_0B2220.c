/* LEVEL_01.REL:0x0B2220: Ghidra body 104 bytes.
 * Pinned pure C links 112 bytes and first differs at +8.
 * Recheck shared global-field access and clamp scheduling. No matching credit.
 */
extern int D_001FC1B4;
extern int D_001FC1D0;

void func_0B2220(void)
{
    if (D_001FC1B4 != 0) {
        D_001FC1B4--;
    }
    if (D_001FC1B4 == 0) {
        D_001FC1D0 -= 8;
    } else {
        D_001FC1D0 += 8;
    }
    if (D_001FC1D0 > 255) {
        D_001FC1D0 = 255;
    }
    if (D_001FC1D0 < 0) {
        D_001FC1D0 = 0;
    }
}
