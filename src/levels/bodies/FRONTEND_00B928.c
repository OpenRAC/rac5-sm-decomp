/* FRONTEND:0x00B928 -- decodes three 2-bit fields from a tagged byte pair. */
static __inline__ unsigned char is_tagged(const unsigned char *p)
{
    if (p == 0)
        return 0;
    return p[0] == 0x91;
}

void func_00B928(const unsigned char *source, unsigned int *parts)
{
    unsigned char valid = is_tagged(source);

    if (valid) {
        unsigned int value = (signed char)source[1];
        unsigned int first = value & 3;
        unsigned int second;
        unsigned int third;

        value >>= 2;
        second = value & 3;
        value >>= 2;
        third = value & 3;
        parts[0] = first;
        parts[1] = second;
        parts[2] = third;
        parts[3] = (first != 0) + (second != 0) + (third != 0);
    }
}
