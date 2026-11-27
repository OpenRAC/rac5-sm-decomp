/* LEVEL_04:0x165538 -- compares two bytes of a table at object+0x58 with the given pair. */
long long func_165538(char *object, unsigned char first, unsigned char second)
{
    unsigned char *bytes = *(unsigned char **)(object + 0x58);
    long long result = 0;
    int t;

    if (bytes[0] == first) {
        t = bytes[1] == second;
        result = t;
    }
    return result;
}
