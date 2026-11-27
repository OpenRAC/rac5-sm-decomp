/* USA SCUS_976.15 boot: readTexPSMCT32__FiiiiiiPv, 0x01E8E860.
 * Observed body: 408 bytes inside a 416-byte interval (the rest is a
 * duplicated epilogue word and a nop of filler before the next function).
 * Measured 26 November 2026: the compiled function is 408 bytes (same length
 * as retail) and 86 of its 102 instruction words match with relocation fields
 * masked; after independent SN linking at the retail address 372 of 408 bytes
 * are equal, first difference at byte 189, under the default GNU route and
 * gnu-ee-trial, with -O2 -G0 (about 25 source variants tried in this and
 * earlier rounds). Not exact; no complete-program gate, promotion or C
 * matching credit. Reconstructed from the retail boot. It copies a rrw x rrh
 * pixel rectangle starting at (dsax, dsay) out of the software image of GS
 * local memory (gsmem) laid out as PSMCT32 (pages of 64x32 pixels, block32 /
 * columnWord32 swizzle tables, dbp in units of 64 words) into a linear 32-bit
 * buffer. Spelling every swizzle step as its own variable (py = y - pageY * 32
 * and so on) makes the row terms invariant: they now leave the inner loop and
 * the row counter stays in its argument register, as in retail; the same
 * spelling makes readTexPSMCT16 and writeTexPSMT8 exact. Remaining difference:
 * only two registers are swapped in the inner loop. Retail gives the x offset
 * inside the page (and the column index derived from it) the third argument
 * register and the x block number the second; ours does the opposite. Local
 * register allocation ranks the two value chains by references per live
 * length, and the two ranks are almost equal here. Reopen with a source
 * spelling that shortens the block-number chain or lengthens the page-offset
 * chain without changing the instructions, or with a check of the compiler's
 * local allocation priority against a C++ front end.
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
            int addr = startBlockPos + page * 2048;
            int cw;
            addr += block * 64;
            addr += column * 16;
            cw = columnWord32[cx + cy * 8];
            addr += cw;
            *dst = gsmem[addr];
            dst++;
        }
    }
}
