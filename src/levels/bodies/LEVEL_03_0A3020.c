extern char D_002B9E88[];
extern int func_0A0568(char *, int, int);

int func_0A3020(int index)
{
    char *image = (char *)((unsigned int)D_002B9E88 +
                           (unsigned int)index * 100U);
    int result = 0;

    if (image != 0)
        result = func_0A0568(image, 0, 0);
    return result;
}
