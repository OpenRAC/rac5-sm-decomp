/* LEVEL_01:0x1EB4A8 -- returns the third argument when the two strings are equal, else zero. */
extern int strcmp(const char *a, const char *b);

int __throw_type_match(const char *a, const char *b, int value)
{
    if (strcmp(a, b) != 0) {
        return 0;
    }
    return value;
}
