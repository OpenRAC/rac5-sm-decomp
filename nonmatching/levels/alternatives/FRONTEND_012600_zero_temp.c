/* FRONTEND.REL:0x012600: writes a start/end pair from a record, clamped by a division.
 * Pinned C with -mno-check-zero-division links 140/140 bytes at FRONTEND and its 20 level
 * copies, but only through a local zero temporary in the clamp, which has no purpose other
 * than steering code generation. The natural `if (quotient < 0) quotient = 0;` links 144
 * bytes (19 differing words, first at +0x34). Withdrawn before acceptance.
 * Retry: recover a natural form of the clamp that keeps the retail register use.
 * No matching credit.
 */
extern int func_0125F0(void *);

void func_012600(char *record, int *start, int *end)
{
    if ((*(unsigned int *)(record + 0x14) & 2) == 0) {
        *start = 0;
        *end = *(int *)(record + 4);
    } else {
        int divisor = func_0125F0(record);
        int numerator = *(int *)(record + 0x68);
        int offset = *(int *)(record + 0x74);
        int quotient = numerator / divisor;
        int last = quotient + offset;
        int limit = *(int *)(record + 4);
        {
            int zero = 0;
            if (quotient < zero) quotient = zero;
        }
        if (last <= limit) limit = last;
        *start = quotient;
        *end = limit;
    }
}
