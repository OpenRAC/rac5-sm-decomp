/* LEVEL_01:0x134E78 -- counts leading repeats of the first byte (up to 0x80 bytes). */
unsigned char func_134E78(const unsigned char *data, unsigned int maximum)
{
    unsigned int n;
    unsigned int i;
    unsigned char first;
    unsigned char count;
    first = data[0];
    if (maximum > 0x80) n = 0x80; else n = maximum;
    count = 0;
    for (i = 1; i < n; i++) {
        if (first != data[i])
            break;
        count++;
    }
    if (count != 0)
        count++;
    return count;
}
