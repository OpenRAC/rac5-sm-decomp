/* FRONTEND.REL:0x00B928: Ghidra body 104 bytes.
 * Pinned pure C links 104 bytes and first differs at +1.
 * Recheck the validity-byte mask and output pointer register lifetime. No matching credit.
 */
void func_00B928(const unsigned char *source, unsigned int *parts)
{
    unsigned char valid = 0;
    if (source != 0) {
        valid = source[0] == 0x91;
    }
    if (valid) {
        int value = (signed char)source[1];
        unsigned int first = value & 3;
        unsigned int second = (value >> 2) & 3;
        unsigned int third = (value >> 4) & 3;
        parts[0] = first;
        parts[1] = second;
        parts[2] = third;
        parts[3] = (first != 0) + (second != 0) + (third != 0);
    }
}
