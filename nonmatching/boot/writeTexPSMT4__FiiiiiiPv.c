/* USA SCUS_976.15 boot: writeTexPSMT4__FiiiiiiPv, 0x01E8EDB8.
 * Observed body: 592 bytes inside a 608-byte interval (the rest is a
 * duplicated epilogue word, a nop and a stray stack-adjust word with a nop of
 * filler before the next function). Measured 28 November 2026: all 592 body
 * bytes are exact after an independent link at the retail address under the
 * rebuilt default GNU route and gnu-ee-trial, -O2 -G0, default GNU assembler.
 * Local exactness with rebuilt tools is not qualification, promotion or C
 * matching credit. Reconstructed from the retail boot. It writes a rrw x rrh
 * rectangle of 4-bit pixels, packed two per byte (low nibble first) in a linear
 * buffer, into the software image of GS local memory (gsmem) laid out as
 * PSMT4 (pages of 128x128 pixels, the buffer width halved, block4,
 * columnWord4 (one 128-entry table per column parity) and columnByte4 tables;
 * bit 0 of the columnByte4 entry selects the destination nibble). The nibble
 * parity is not reset per row. As in writeTexPSMT8 every swizzle step is its
 * own variable and the address is accumulated term by term. The start block
 * position must be computed after dbw is halved: initialised at its
 * declaration it swaps the two callee-saved registers holding it and the
 * halved width (584 of 592 bytes). Testing the parity as if (odd) with the
 * odd case first sets the retail branch sense; the shifted source nibble is
 * masked with 0xF0, which the compiler keeps as a byte-mode mask.
 */
extern int block4[];
extern int columnWord4[2][128];
extern int columnByte4[];
extern unsigned int gsmem[];

void writeTexPSMT4__FiiiiiiPv(int dbp, int dbw, int dsax, int dsay, int rrw, int rrh, void *data) {
    unsigned char *src = (unsigned char *)data;
    int startBlockPos;
    int odd = 0;
    int x;
    int y;

    dbw >>= 1;
    startBlockPos = dbp * 64;
    for (y = dsay; y < dsay + rrh; y++) {
        for (x = dsax; x < dsax + rrw; x++) {
            int pageX = x / 128;
            int pageY = y / 128;
            int page = pageX + pageY * dbw;
            int px = x - pageX * 128;
            int py = y - pageY * 128;
            int blockX = px / 32;
            int blockY = py / 16;
            int block = block4[blockX + blockY * 4];
            int bx = px - blockX * 32;
            int by = py - blockY * 16;
            int column = by / 4;
            int cx = bx;
            int cy = by - column * 4;
            int cw = columnWord4[column & 1][cx + cy * 32];
            int addr = startBlockPos + page * 2048;
            int cb;
            unsigned char *dst;
            addr += block * 64;
            addr += column * 16;
            addr += cw;
            cb = columnByte4[cx + cy * 32];
            dst = (unsigned char *)&gsmem[addr];
            if (cb & 1) {
                if (odd) {
                    dst[cb >> 1] = (dst[cb >> 1] & 0x0F) | (*src & 0xF0);
                } else {
                    dst[cb >> 1] = (dst[cb >> 1] & 0x0F) | ((*src << 4) & 0xF0);
                }
            } else {
                if (odd) {
                    dst[cb >> 1] = (dst[cb >> 1] & 0xF0) | (*src >> 4);
                } else {
                    dst[cb >> 1] = (dst[cb >> 1] & 0xF0) | (*src & 0x0F);
                }
            }
            if (odd) {
                src++;
            }
            odd ^= 1;
        }
    }
}
