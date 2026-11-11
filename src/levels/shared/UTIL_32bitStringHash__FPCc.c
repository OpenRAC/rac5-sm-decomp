/* LEVEL_01:0x0A4000 -- hashes a string: a four-bit rotate-xor over its characters seeded with its length, then folds in the shifts by 10 and 20. */
extern unsigned int strlen(const char *s);

unsigned int UTIL_32bitStringHash__FPCc(const char *s)
{
    unsigned int len = strlen(s);
    unsigned int mask = 0xFFFFFFFF;
    unsigned int h = len;
    unsigned int i;

    for (i = 0; i < len; i++)
        h = ((h << 4) ^ (h >> 28)) ^ s[i];
    return (h ^ (h >> 10) ^ (h >> 20)) & mask;
}
