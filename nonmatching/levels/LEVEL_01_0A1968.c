/* LEVEL_01.REL:0x0A1968: 20 reviewed USA placements.
 * Ghidra body: 184 bytes; pinned C links 140 bytes and first differs at +1.
 * The packet header and 128-bit copy loop need a proven wide-integer construction; the current C differs at the first word. Reopen with the original ABI and a qualified TImode conversion route.
 * This source has no matching credit.
 */
unsigned int *func_0A1968(unsigned int *output, unsigned int tag,
                          const unsigned int *input, unsigned int count,
                          unsigned int header_a, unsigned int header_b)
{
    unsigned int index;
    output[0] = (count + 1) | 0x10000000u;
    output[1] = (int)(count + 1) >> 31;
    output[2] = header_a;
    output[3] = header_b;
    output[4] = 0;
    output[5] = 0;
    output[6] = 0;
    output[7] = (count << 16) | tag | 0x6c000000u;
    output += 8;
    for (index = 0; index < count; index++) {
        *(unsigned long long *)output = *(const unsigned long long *)input;
        output[2] = input[2];
        output[3] = input[3];
        output += 4;
        input += 4;
    }
    return output;
}
