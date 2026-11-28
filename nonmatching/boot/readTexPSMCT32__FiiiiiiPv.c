/* USA SCUS_976.15 boot: readTexPSMCT32__FiiiiiiPv, 0x01E8E860.
 * Observed body: 408 bytes inside a 416-byte interval (the rest is a
 * duplicated epilogue word and a nop of filler before the next function).
 * Measured 28 November 2026: all 408 body bytes are exact after an
 * independent link at the retail address under the rebuilt default GNU route
 * and gnu-ee-trial, -O2 -G0, default GNU assembler. Local exactness with
 * rebuilt tools is not qualification, promotion or C matching credit.
 * Reconstructed from the retail boot. It copies a rrw x rrh pixel rectangle
 * starting at (dsax, dsay) out of the software image of GS local memory
 * (gsmem) laid out as PSMCT32 (pages of 64x32 pixels, block32 / columnWord32
 * swizzle tables, dbp in units of 64 words) into a linear 32-bit buffer.
 * Spelling every swizzle step as its own variable (py = y - pageY * 32 and so
 * on) keeps the row terms out of the inner loop, as in readTexPSMCT16 and
 * writeTexPSMT8. The address is summed left to right as retail does: the
 * table word is read first, then the page, start and block terms are formed
 * in one statement and the column and table terms are added one per
 * statement. The 26 November form, which added the block term separately and
 * read the table word last, swapped the page-offset and block-number
 * registers (372 of 408 bytes). Of 48 measured splits of the five-term sum,
 * only this one is exact; a single five-term expression regroups the sum.
 */
extern int block32[];
extern int columnWord32[];
extern unsigned int gsmem[];

void readTexPSMCT32__FiiiiiiPv(int dbp, int dbw, int dsax, int dsay, int rrw, int rrh, void *data) {
    unsigned int *dst = (unsigned int *)data;
    int startBlockPos = dbp * 64;
    int x;
    int y;

    for (y = dsay; y < dsay + rrh; y++) {
        for (x = dsax; x < dsax + rrw; x++) {
            int pageX = x / 64;
            int pageY = y / 32;
            int page = pageX + pageY * dbw;
            int px = x - pageX * 64;
            int py = y - pageY * 32;
            int blockX = px / 8;
            int blockY = py / 8;
            int block = block32[blockX + blockY * 8];
            int bx = px - blockX * 8;
            int by = py - blockY * 8;
            int column = by / 2;
            int cx = bx;
            int cy = by - column * 2;
            int cw = columnWord32[cx + cy * 8];
            int addr = startBlockPos + page * 2048 + block * 64;
            addr += column * 16;
            addr += cw;
            *dst = gsmem[addr];
            dst++;
        }
    }
}
