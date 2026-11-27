/* USA SCUS_976.15 boot: readTexPSMCT16__FiiiiiiPv, 0x01E8EA00.
 * Observed body: 444 bytes inside a 496-byte interval (the rest is repeated
 * epilogue words and nops of filler before the next function). Measured 26
 * November 2026: all 444 body bytes are exact after independent SN linking at
 * the retail address under the rebuilt default GNU route and gnu-ee-trial,
 * with -O2 -G0 and the default GNU assembler. The default tools are rebuilt,
 * not hash-qualified. This is an unaccepted witness: complete-program
 * integration, boundaries, types and qualification require separate review. No
 * promotion or matching credit is claimed here. Reconstructed from the retail
 * boot. It copies a rrw x rrh rectangle of 16-bit pixels starting at (dsax,
 * dsay) out of the software image of GS local memory (gsmem) laid out as
 * PSMCT16 (pages of 64x64 pixels, block16 / columnWord16 / columnHalf16
 * swizzle tables, dbp in units of 64 words) into a linear buffer. The source
 * spells every step of the swizzle as its own variable (page, page offset,
 * block, offset in block, column): written as y - (y / 64) * 64 the row terms
 * become invariant and leave the inner loop with the row counter kept in its
 * argument register. The address is accumulated term by term, and the halfword
 * index is looked up only after the word address is complete.
 */
extern int block16[];
extern int columnWord16[];
extern int columnHalf16[];
extern unsigned int gsmem[];

void readTexPSMCT16__FiiiiiiPv(int dbp, int dbw, int dsax, int dsay, int rrw, int rrh, void *data) {
    unsigned short *dst = (unsigned short *)data;
    int startBlockPos = dbp * 64;
    int x;
    int y;

    for (y = dsay; y < dsay + rrh; y++) {
        for (x = dsax; x < dsax + rrw; x++) {
            int pageX = x / 64;
            int pageY = y / 64;
            int page = pageX + pageY * dbw;
            int px = x - pageX * 64;
            int py = y - pageY * 64;
            int blockX = px / 16;
            int blockY = py / 8;
            int block = block16[blockX + blockY * 4];
            int bx = px - blockX * 16;
            int by = py - blockY * 8;
            int column = by / 2;
            int cx = bx;
            int cy = by - column * 2;
            int cw = columnWord16[cx + cy * 16];
            int addr = startBlockPos + page * 2048;
            unsigned short *src;
            int ch;
            addr += block * 64;
            addr += column * 16;
            addr += cw;
            ch = columnHalf16[cx + cy * 16];
            src = (unsigned short *)&gsmem[addr];
            *dst = src[ch];
            dst++;
        }
    }
}
