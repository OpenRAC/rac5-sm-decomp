/* USA SCUS_976.15 boot: MCPFONT_DrawTextureSimpleArea__FUissssUsUsUsUsUi, 0x01E676A8.
 * Observed body: 244 bytes, followed by one alignment word within the 248-byte interval.
 * Measured 17 November 2026: not exact. Compiled 240 bytes under sdk991111sq and
 * 244 bytes under pinned and gnu-ee-trial (profiles tried: pinned, gnu-ee-trial,
 * gnu-ee-trial-divpad, gnu-ee-trial-divpad-blockmove, sdk991111, sdk991111sq);
 * independent linking gives 204/244 bytes equal on both default routes, first difference at byte 0.
 * Not exact; no complete-program gate, promotion or C matching credit.
 * Reconstructed from the retail boot. Selects the texture, then draws a textured
 * rectangle at (x0, y0) with size (x1 - x0, y1 - y0), the four unsigned 16-bit
 * texture coordinates converted to float, the given colour and a second colour of 0xFFFFFF.
 * The body logic and call sequence agree with retail; the only remaining difference is the
 * prologue and epilogue: retail saves the callee-saved registers as 16-byte quadwords
 * (frame 0xA0), whereas every available route saves doublewords (frame 0x50) or, under
 * sdk991111sq, uses reversed slot order. Reopen when a route that emits quadword saves in
 * retail slot order is available (the known quad-save prologue blocker).
 */
extern void TEXMGR_SetCurrent__FUi(unsigned int tex);
extern void UTIL_DrawTexturedRect__FssssffffUiUi(short x, short y, short w, short h, float u0, float v0, float u1, float v1, unsigned int c0, unsigned int c1);

void MCPFONT_DrawTextureSimpleArea__FUissssUsUsUsUsUi(unsigned int tex, short x0, short y0, short x1, short y1, unsigned short u0, unsigned short v0, unsigned short u1, unsigned short v1, unsigned int color) {
    TEXMGR_SetCurrent__FUi(tex);
    UTIL_DrawTexturedRect__FssssffffUiUi(x0, y0, x1 - x0, y1 - y0, u0, v0, u1, v1, color, 0xFFFFFF);
}
