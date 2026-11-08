extern char D_002A8408[];
extern int func_0A18C0(char *, int, int);

int func_0A43B8(int index)
{
    char *image = (char *)((unsigned int)D_002A8408 +
                           (unsigned int)index * 100U);
    int result = 0;

    if (image != 0)
        result = func_0A18C0(image, 0, 0);
    return result;
}
