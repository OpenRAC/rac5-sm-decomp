/* LEVEL_01.REL:0x0A8CD8: reviewed 104-byte candidate.
 * pinned C with gnu-ee-trial links 100 bytes; first differs at +1.
 * Retry: Recover byte-kind boolean normalization and output-pointer allocation; the
 * linked body is four bytes short.
 * No matching credit.
 */
void func_0A8CD8(const unsigned char *source, unsigned int *out) {
    unsigned char valid = 0;
    if (source != 0) {
        valid = source[0] == 0x91;
    }
    if (valid != 0) {
        unsigned int value = (unsigned int)((const signed char *)source)[1];
        unsigned int first = value & 3;
        unsigned int second = (value >> 2) & 3;
        unsigned int third = (value >> 4) & 3;
        out[0] = first;
        out[1] = second;
        out[2] = third;
        out[3] = (first != 0) + (second != 0) + (third != 0);
    }
}
