extern int func_136938(int handle, int mode);
extern int func_137670(int value, int mode);
extern int func_137D20(int value);
extern int func_136A20(int handle, int mode);

void func_137510(char *obj, char *ctx)
{
    char *node = *(char **)(obj + 0x10);
    unsigned int i;

    for (i = 0; i < *(unsigned int *)(obj + 0x14); i++) {
        *(char **)(node + 0x40) = obj;
        node += *(unsigned char *)(node + 0x62) * 8 + 0x64;
    }
    *(int *)(obj + 4) = func_137670(func_136938(*(int *)(obj + 4), 6), 1);
    if (*(int *)(obj + 8) != 0)
        *(int *)(obj + 8) = func_137D20(func_136938(*(int *)(obj + 8), 6));
    *(int *)(obj + 0xC) = func_136A20(*(int *)(obj + 0xC), 6);
}
