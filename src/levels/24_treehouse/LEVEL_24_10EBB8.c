extern int sscanf(const char *, const char *, ...);
extern char D_001E8490[];

int func_10EBB8(const char *text, int *value, int minimum, int maximum)
{
    if (sscanf(text, D_001E8490, value) == 1) {
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
