extern int sscanf(const char *, const char *, ...);
extern char D_0022C410[];

int func_11B9A0(const char *text, int *value, int minimum, int maximum)
{
    if (sscanf(text, D_0022C410, value) == 1) {
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
