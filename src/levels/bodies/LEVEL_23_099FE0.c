extern char D_00270448[];
extern int func_097528(char *, int, int);

int func_099FE0(int index)
{
    char *image = (char *)((unsigned int)D_00270448 +
                           (unsigned int)index * 100U);
    int result = 0;

    if (image != 0)
        result = func_097528(image, 0, 0);
    return result;
}
