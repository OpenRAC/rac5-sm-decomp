extern int sscanf(const char *, const char *, ...);
extern char D_001BFA50[];

int func_0F8650(const char *text, int *value, int minimum, int maximum)
{
    if (sscanf(text, D_001BFA50, value) == 1) {
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
