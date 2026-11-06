extern int sscanf(const char *, const char *, ...);
extern char D_00220690[];

int func_116B68(const char *text, int *value, int minimum, int maximum)
{
    if (sscanf(text, D_00220690, value) == 1) {
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
