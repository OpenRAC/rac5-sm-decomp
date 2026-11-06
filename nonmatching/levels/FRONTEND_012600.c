/* FRONTEND.REL:0x012600: Ghidra body 140 bytes.
 * Pinned pure C with `-mno-check-zero-division` links 140 bytes and first differs at +36.
 * Recheck division result and output-bound lifetimes under the source-specific no-zero-check flag. No matching credit.
 */
extern int func_0125F0(void *);

void func_012600(char *record, int *start, int *end)
{
    if ((*(unsigned int *)(record + 0x14) & 2) == 0) {
        *start = 0;
        *end = *(int *)(record + 4);
        return;
    }
    {
        int divisor = func_0125F0(record);
        int numerator = *(int *)(record + 0x68);
        int offset = *(int *)(record + 0x74);
        int quotient = numerator / divisor;
        int last = quotient + offset;
        int limit = *(int *)(record + 4);
        *start = quotient < 0 ? 0 : quotient;
        *end = last <= limit ? last : limit;
    }
}
