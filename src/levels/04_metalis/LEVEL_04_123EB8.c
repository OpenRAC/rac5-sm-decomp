extern int sscanf(const char *, const char *, ...);
extern char D_00231090[];

int func_123EB8(const char *text, int *value, int minimum, int maximum)
{
    if (sscanf(text, D_00231090, value) == 1) {
        if (*value < minimum) {
            *value = minimum;
        }
        if (maximum < *value) {
            *value = maximum;
        }
        return 1;
    }
    return 0;
}
