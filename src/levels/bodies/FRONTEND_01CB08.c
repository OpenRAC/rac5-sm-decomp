extern int sscanf(const char *, const char *, ...);
extern char D_00109520[];

int func_01CB08(const char *text, int *value, int minimum, int maximum)
{
    if (sscanf(text, D_00109520, value) == 1) {
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
