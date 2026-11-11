unsigned int func_0258C0(unsigned char *p, unsigned int *out)
{
    unsigned int byte;
    unsigned int shift = 0;
    unsigned int result;

    byte = *p++;
    result = byte & 0x7F;
    while (byte & 0x80)
    {
        byte = *p++;
        shift += 7;
        result |= (byte & 0x7F) << shift;
    }
    *out = result;
    return (unsigned int)p;
}
