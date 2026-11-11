extern char D_00286788[];
extern int func_09DA98(char *, int, int);

int func_0A0550(int index)
{
    char *image = (char *)((unsigned int)D_00286788 +
                           (unsigned int)index * 100U);
    int result = 0;

    if (image != 0)
        result = func_09DA98(image, 0, 0);
    return result;
}
