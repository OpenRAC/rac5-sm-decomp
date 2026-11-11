/* FRONTEND:0x025908 -- decodes a 7-bit variable-length integer. */
unsigned char *func_025908(unsigned char *p, unsigned int *out)
{
    unsigned int shift = 0;
    unsigned int value = 0;
    unsigned char b;

    do {
        b = *p++;
        value |= (unsigned int)(b & 0x7F) << shift;
        shift += 7;
    } while (b & 0x80);

    if (shift < 0x20) {
        if (b & 0x40)
            value |= -1 << shift;
    }
    *out = value;
    return p;
}
