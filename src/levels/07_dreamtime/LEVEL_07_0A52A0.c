extern char D_002B4908[];
extern int func_0A27E8(char *, int, int);

int func_0A52A0(int index)
{
    char *image = (char *)((unsigned int)D_002B4908 +
                           (unsigned int)index * 100U);
    int result = 0;

    if (image != 0)
        result = func_0A27E8(image, 0, 0);
    return result;
}
