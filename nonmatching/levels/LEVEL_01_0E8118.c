/* USA LEVEL_01:0E8118, 180-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 180 bytes: 33 differing words; first difference +0x0. No matching credit.
 * Remaining issue: register allocation / cmov condition: length now 180 = retail and the if/else
 * layout and first clamp (slt 2<kind, movz onto 3) match with kind == 4 tested first, if (kind <
 * 3) c = kind; else c = 3;, flag test computed first; left: retail second clamp is slt -1<c +
 * movn onto 0 (ours slti c,0 + movz, every c>-1 / c>=0 / ?: form folds to GE 0) and kind/flag
 * land in t1/a3 vs ours a3/t0, so the packing registers differ
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x0E8118 -- packs a control word from a clamped level, a table value, a flag test and the flag itself, and passes it with fixed tables and values to the packet helper. */
extern unsigned int D_00297DC0[];
extern unsigned char D_000E7978[];
extern unsigned char D_000E7838[];

void func_096948(unsigned char *buf, unsigned int mask, unsigned int tbl, int n, int a, int b, unsigned int c);

void func_0E8118(unsigned char *buf, int kind, int index, unsigned int flag)
{
    int level;
    int c;
    unsigned int word;
    unsigned int off = flag == 0;

    if (kind == 4) {
        level = 9;
    } else {
        if (kind < 3)
            c = kind;
        else
            c = 3;
        if (c >= 0)
            kind = c;
        else
            kind = 0;
        level = 0x13 - kind;
    }
    word = (level << 27) | (D_00297DC0[index] << 16) | (off << 15) | ((flag << 6) | 0x7000) | 0x19;
    func_096948(buf, word, (unsigned int)D_000E7978, 0x3C, 0, -1, (unsigned int)D_000E7838);
}
