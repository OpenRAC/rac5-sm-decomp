extern int sscanf(const char *, const char *, ...);
extern char D_00261390[];

int func_1290F0(const char *text, int *value, int minimum, int maximum)
{
    if (sscanf(text, D_00261390, value) == 1) {
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
