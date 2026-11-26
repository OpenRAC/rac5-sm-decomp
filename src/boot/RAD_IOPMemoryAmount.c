/* RAD_IOPMemoryAmount: converts the IOP memory flags into a byte amount of at least 0x1C08. */
unsigned int RAD_IOPMemoryAmount(unsigned int flags)
{
    unsigned int n;
    unsigned int r;

    n = flags & 1;
    if (flags & 2) {
        n = n + 1;
    }
    r = (n << 12) + 0x1000;
    if (r < 0x1C08) {
        r = 0x1C08;
    }
    return r;
}
