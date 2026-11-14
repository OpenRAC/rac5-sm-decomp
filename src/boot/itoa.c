/* itoa, retail 0x01ECA630: unsigned digit loop over the digit table with a leading minus for negative values in base 10, then reversed in place. */
extern char D_01EFEA98[];
extern char *strrev(char *s);
char *itoa(int value, char *buf, int radix)
{
    int neg;
    int i;
    unsigned int u = value;
    neg = value < 0;
    if (neg) {
        if (radix == 10) u = -value;
    }
    i = 0;
    do {
        buf[i++] = D_01EFEA98[u % radix];
        u = u / radix;
    } while (u != 0);
    if (neg) buf[i++] = '-';
    buf[i] = 0;
    return strrev(buf);
}
