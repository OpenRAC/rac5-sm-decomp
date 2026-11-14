/* LEVEL_01:0x1EE368 -- compares the strings the two arguments point to and returns 1 when the first sorts before the second. */
extern int strcmp(const char *a, const char *b);

int before__C9type_infoRC9type_info(char **a, char **b)
{
    return strcmp(*a, *b) < 0;
}
