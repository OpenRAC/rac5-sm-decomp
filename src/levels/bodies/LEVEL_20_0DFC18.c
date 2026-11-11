extern int func_0DF030(int handle, int mode);
extern int func_0DFD78(int value, int mode);
extern int func_0E0428(int value);
extern int func_0DF118(int handle, int mode);

void func_0DFC18(char *obj, char *ctx)
{
    char *node = *(char **)(obj + 0x10);
    unsigned int i;

    for (i = 0; i < *(unsigned int *)(obj + 0x14); i++) {
        *(char **)(node + 0x40) = obj;
        node += *(unsigned char *)(node + 0x62) * 8 + 0x64;
    }
    *(int *)(obj + 4) = func_0DFD78(func_0DF030(*(int *)(obj + 4), 6), 1);
    if (*(int *)(obj + 8) != 0)
        *(int *)(obj + 8) = func_0E0428(func_0DF030(*(int *)(obj + 8), 6));
    *(int *)(obj + 0xC) = func_0DF118(*(int *)(obj + 0xC), 6);
}
