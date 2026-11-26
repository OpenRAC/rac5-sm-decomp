/* USA SCUS_976.15 boot: MCPFONT_DrawTextureSimpleArea__FUissssUsUsUsUsUi, 0x01E676A8.
 * Observed body: 244 bytes, followed by one alignment word within the 248-byte interval.
 * Measured 26 November 2026: not exact. Compiled 244 bytes under pinned and gnu-ee-trial
 * (37/61 words equal, relocations masked) and 240 bytes under sdk991111sq; independent
 * linking gives 204/244 bytes equal on both default routes, first difference at byte 0.
 * Not exact; no complete-program gate, promotion or C matching credit.
 * Reconstructed from the retail boot. Selects the texture, then draws a textured
 * rectangle at (x0, y0) with size (x1 - x0, y1 - y0), the four unsigned 16-bit
 * texture coordinates converted to float, the given colour and a second colour of 0xFFFFFF.
 * The body logic and call sequence agree with retail. The only difference is the prologue
 * and epilogue: retail saves s0-s7 and fp (fp is an ordinary saved register holding the
 * colour, not a frame pointer) as nine 16-byte quadword stores in ascending slot order at
 * frame 0xA0, with ra as a doubleword at 0x90. A 128-bit local (mode(TI)) makes the default
 * compiler quad-save only the register that holds it, never all nine, and the available
 * quad-save compiler (sdk991111sq) assigns the slots in reverse order. No source shape
 * changes this. Reopen when a route that quad-saves all callee-saved registers in retail
 * slot order is available.
 */
extern void TEXMGR_SetCurrent__FUi(unsigned int tex);
extern void UTIL_DrawTexturedRect__FssssffffUiUi(short x, short y, short w, short h, float u0, float v0, float u1, float v1, unsigned int c0, unsigned int c1);

void MCPFONT_DrawTextureSimpleArea__FUissssUsUsUsUsUi(unsigned int tex, short x0, short y0, short x1, short y1, unsigned short u0, unsigned short v0, unsigned short u1, unsigned short v1, unsigned int color) {
    TEXMGR_SetCurrent__FUi(tex);
    UTIL_DrawTexturedRect__FssssffffUiUi(x0, y0, x1 - x0, y1 - y0, u0, v0, u1, v1, color, 0xFFFFFF);
}
