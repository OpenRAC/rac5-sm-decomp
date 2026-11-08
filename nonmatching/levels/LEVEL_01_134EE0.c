/* LEVEL_01.REL:0x134EE0: reviewed 136-byte candidate.
 * pinned C with gnu-ee-trial links 136 bytes; first differs at +4.
 * Retry: Recover the bounded-count register lifetime and prologue order; review the
 * byte-return callee and the internal Ghidra NOP gap.
 * No matching credit.
 */
extern unsigned char func_134E78(char *value, unsigned int kind);

unsigned char func_134EE0(char *base, unsigned int count)
{
    unsigned int limit = 0x80;
    unsigned char result = 1;
    unsigned int i;

    if (count < 0x81)
        limit = count;
    if (limit != 1) {
        result = 0;
        for (i = 0; i < limit; i++) {
            if (func_134E78(base + i, 2) != 0)
                return result;
            result++;
        }
    }
    return result;
}
