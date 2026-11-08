extern char D_001F4BC8[];
extern int func_08EE60(char *, int, int);

int func_0918B0(int index)
{
    char *image = (char *)((unsigned int)D_001F4BC8 +
                           (unsigned int)index * 100U);
    int result = 0;

    if (image != 0)
        result = func_08EE60(image, 0, 0);
    return result;
}
