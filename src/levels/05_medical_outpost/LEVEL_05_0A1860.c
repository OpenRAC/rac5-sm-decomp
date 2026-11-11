extern char D_0028AEC8[];
extern int func_09ED98(char *, int, int);

int func_0A1860(int index)
{
    char *image = (char *)((unsigned int)D_0028AEC8 +
                           (unsigned int)index * 100U);
    int result = 0;

    if (image != 0)
        result = func_09ED98(image, 0, 0);
    return result;
}
