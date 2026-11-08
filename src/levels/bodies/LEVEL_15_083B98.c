extern char D_001B7048[];
extern int func_081148(char *, int, int);

int func_083B98(int index)
{
    char *image = (char *)((unsigned int)D_001B7048 +
                           (unsigned int)index * 100U);
    int result = 0;

    if (image != 0)
        result = func_081148(image, 0, 0);
    return result;
}
