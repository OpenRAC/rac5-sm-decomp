/* LEVEL_01.REL:0x1EA410: reviewed 96-byte candidate.
 * pinned C with gnu-ee-trial links 96 bytes; first differs at +0.
 * Retry: Qualify a 32-bit partial-product lowering that emits the retail
 * multiplication and register schedule.
 * No matching credit.
 */
unsigned long long func_1EA410(unsigned long long a, unsigned long long b)
{
    int a_hi = (int)(a >> 32);
    int b_hi = (int)(b >> 32);
    int a_lo = (int)a;
    int b_lo = (int)b;
    int cross = a_lo * b_hi + a_hi * b_lo;
    unsigned long long low_product = (unsigned long long)(unsigned int)a_lo *
                                     (unsigned int)b_lo;
    int high = (int)(low_product >> 32) + cross;

    return (low_product & 0xFFFFFFFFull) |
           ((unsigned long long)(unsigned int)high << 32);
}
