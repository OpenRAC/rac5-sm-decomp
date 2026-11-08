extern char D_002B6508[];
extern int func_0A70F8(char *, int, int);

int func_0A9BB0(int index)
{
    char *image = (char *)((unsigned int)D_002B6508 +
                           (unsigned int)index * 100U);
    int result = 0;

    if (image != 0)
        result = func_0A70F8(image, 0, 0);
    return result;
}
