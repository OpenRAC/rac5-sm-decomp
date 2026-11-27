/* USA FRONTEND:01C598, 216-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 216 bytes: 36 differing words; first difference +0x20. No matching credit.
 * Remaining issue: register allocation in a path CRC with a dead slash-skip loop (44 -> 36
 * words, 216 B): testing *s directly and reading ch = *s++ after the skip block reproduces the
 * per-arm ch reload and the padded short loop; left: retail walks a copy of s (a1) in the skip
 * loop and keeps s in a0/s+1 in a3, ours walks the skip pointer in a0 and keeps s+1 in a2 (all
 * later registers shift); assemblers/profiles/-fno-gcse tried
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* FRONTEND:0x01C598 -- CRC of a path string, case-folded with slashes normalized. */
extern unsigned int D_00109040[];
unsigned int func_01C598(const unsigned char *s)
{
    unsigned int crc;
    unsigned char ch;
    const unsigned char *q;

    if (s == 0) return 0;
    crc = 0xFFFFFFFF;
    while (*s != 0) {
        if (*s == 0x2F || *s == 0x5C) {
            q = s;
            do { q++; } while (*q == 0x2F || *q == 0x5C);
        }
        ch = *s++;
        if (ch >= 0x61 && ch <= 0x7A) ch -= 0x20;
        if (ch == 0x2F) ch = 0x5C;
        crc = (crc >> 8) ^ D_00109040[(crc & 0xFF) ^ ch];
    }
    return ~crc;
}
