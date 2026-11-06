/* FRONTEND.REL:0x023390: 21 USA placements.
 * Ghidra body: 96 bytes; pinned C links 96 bytes and first differs at +0.
 * The C expresses the low 64 bits as partial products without an external helper, but register and multiply scheduling differ from the 96-byte retail body. Reopen with a qualified 32-bit product layout.
 * This source has no matching credit.
 */
unsigned long long func_023390(long long first, long long second)
{
    int cross_first = (int)first * (int)(second >> 32);
    int cross_second = (int)(first >> 32) * (int)second;
    unsigned long long low_product =
        (unsigned long long)(unsigned int)first * (unsigned int)second;
    int high_product = (int)(low_product >> 32) + cross_first + cross_second;
    return (low_product & 0xffffffffULL) |
           ((unsigned long long)high_product << 32);
}
