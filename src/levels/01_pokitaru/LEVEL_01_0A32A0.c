/* LEVEL_01:0x0A32A0 -- placement copy of LEVEL_02_0A9BB0.c. */
extern char D_0029F008[];
extern int func_0A07E0(char *, int, int);

int func_0A32A0(int index)
{
    char *image = (char *)((unsigned int)D_0029F008 +
                           (unsigned int)index * 100U);
    int result = 0;

    if (image != 0)
        result = func_0A07E0(image, 0, 0);
    return result;
}
