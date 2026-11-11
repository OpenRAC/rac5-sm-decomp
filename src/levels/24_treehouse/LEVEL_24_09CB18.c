extern char D_0026AEC8[];
extern int func_09A060(char *, int, int);

int func_09CB18(int index)
{
    char *image = (char *)((unsigned int)D_0026AEC8 +
                           (unsigned int)index * 100U);
    int result = 0;

    if (image != 0)
        result = func_09A060(image, 0, 0);
    return result;
}
