extern int sscanf(const char *, const char *, ...);
extern char D_001CD7D0[];

int func_0F9268(const char *text, int *value, int minimum, int maximum)
{
    if (sscanf(text, D_001CD7D0, value) == 1) {
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
