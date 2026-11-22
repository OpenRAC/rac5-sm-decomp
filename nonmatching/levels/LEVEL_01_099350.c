/* USA LEVEL_01.REL:0x099350 (22 November 2026): port of a sister decompilation
 * twin whose bytes compile exactly, not accepted.
 * Exact only when the compared extent is set to 164 bytes by hand. No matching
 * credit.
 */
/* LEVEL_01:0x099350 -- writes the width and height of a texture slot: fixed sizes for three special ids, else looked up. Ported from OpenRAC/rac5-sm-decomp src/boot/DRAW_GetTextureSize__FPiT0i.c (DRAW_GetTextureSize__FPiT0i). */
extern int func_0A3CF0(int fmt);
extern int func_0A3D20(int fmt);

void func_099350(int *w, int *h, int fmt) {
    switch (fmt) {
    case 0x7FE:
        *w = 0x200;
        *h = 0x1A0;
        break;
    case 0x7FD:
        *w = 0x80;
        *h = 0x40;
        break;
    case 0x7FC:
        *w = 1;
        *h = 1;
        break;
    default:
        *w = func_0A3CF0(fmt);
        *h = func_0A3D20(fmt);
        break;
    }
}
