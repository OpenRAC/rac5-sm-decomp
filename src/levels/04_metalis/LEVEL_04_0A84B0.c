extern char D_002B9808[];
extern int func_0A59F8(char *, int, int);

int func_0A84B0(int index)
{
    char *image = (char *)((unsigned int)D_002B9808 +
                           (unsigned int)index * 100U);
    int result = 0;

    if (image != 0)
        result = func_0A59F8(image, 0, 0);
    return result;
}
