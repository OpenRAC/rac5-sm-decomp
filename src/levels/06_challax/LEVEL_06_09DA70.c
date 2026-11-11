extern char D_0028BD88[];
extern int func_09AFB8(char *, int, int);

int func_09DA70(int index)
{
    char *image = (char *)((unsigned int)D_0028BD88 +
                           (unsigned int)index * 100U);
    int result = 0;

    if (image != 0)
        result = func_09AFB8(image, 0, 0);
    return result;
}
