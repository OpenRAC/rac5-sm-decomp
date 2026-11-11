extern int sscanf(const char *, const char *, ...);
extern char D_00206590[];

int func_10EF20(const char *text, int *value, int minimum, int maximum)
{
    if (sscanf(text, D_00206590, value) == 1) {
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
