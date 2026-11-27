/* USA SCUS_976.15 boot: writeTexPSMT8__FiiiiiiPv, 0x01E8EBF0.
 * Observed body: 456 bytes, it fills its interval. Measured 26 November 2026:
 * all 456 body bytes are exact after independent SN linking at the retail
 * address under the rebuilt default GNU route and gnu-ee-trial, with -O2 -G0
 * and the default GNU assembler. The default tools are rebuilt, not
 * hash-qualified. This is an unaccepted witness: complete-program integration,
 * boundaries, types and qualification require separate review. No promotion or
 * matching credit is claimed here. Reconstructed from the retail boot. It
 * writes a rrw x rrh rectangle of 8-bit pixels from a linear buffer into the
 * software image of GS local memory (gsmem) laid out as PSMT8 (pages of 128x64
 * pixels, the buffer width halved, block8, columnWord8 (one 64-entry table per
 * column parity) and columnByte8 tables). The source spells every step of the
 * swizzle as its own variable; written as y - (y / 64) * 64 the row terms
 * become invariant and leave the inner loop, and the register pressure then
 * spills dsax to the stack as in retail. The address is accumulated term by
 * term, and the byte index is looked up only after the word address is
 * complete.
 */
extern int block8[];
extern int columnWord8[2][64];
extern int columnByte8[];
extern unsigned int gsmem[];

void writeTexPSMT8__FiiiiiiPv(int dbp, int dbw, int dsax, int dsay, int rrw, int rrh, void *data) {
    unsigned char *src = (unsigned char *)data;
    int startBlockPos = dbp * 64;
    int x;
    int y;

    dbw >>= 1;
    for (y = dsay; y < dsay + rrh; y++) {
        for (x = dsax; x < dsax + rrw; x++) {
            int pageX = x / 128;
            int pageY = y / 64;
            int page = pageX + pageY * dbw;
            int px = x - pageX * 128;
            int py = y - pageY * 64;
            int blockX = px / 16;
            int blockY = py / 16;
            int block = block8[blockX + blockY * 8];
            int bx = px - blockX * 16;
            int by = py - blockY * 16;
            int column = by / 4;
            int cx = bx;
            int cy = by - column * 4;
            int cw = columnWord8[column & 1][cx + cy * 16];
            int addr = startBlockPos + page * 2048;
            int cb;
            unsigned char *dst;
            addr += block * 64;
            addr += column * 16;
            addr += cw;
            cb = columnByte8[cx + cy * 16];
            dst = (unsigned char *)&gsmem[addr];
            dst[cb] = *src;
            src++;
        }
    }
}
