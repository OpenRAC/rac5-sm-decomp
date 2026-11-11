extern char D_002EE288[];
extern int func_0AB0E0(char *, int, int);

int func_0ADB98(int index)
{
    char *image = (char *)((unsigned int)D_002EE288 +
                           (unsigned int)index * 100U);
    int result = 0;

    if (image != 0)
        result = func_0AB0E0(image, 0, 0);
    return result;
}
