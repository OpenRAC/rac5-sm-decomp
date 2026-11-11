extern int sscanf(const char *, const char *, ...);
extern char D_0022C690[];

int func_11EC98(const char *text, int *value, int minimum, int maximum)
{
    if (sscanf(text, D_0022C690, value) == 1) {
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
