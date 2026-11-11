extern int func_1010A8(int handle, int mode);
extern int func_101DE0(int value, int mode);
extern int func_102490(int value);
extern int func_101190(int handle, int mode);

void func_101C80(char *obj, char *ctx)
{
    char *node = *(char **)(obj + 0x10);
    unsigned int i;

    for (i = 0; i < *(unsigned int *)(obj + 0x14); i++) {
        *(char **)(node + 0x40) = obj;
        node += *(unsigned char *)(node + 0x62) * 8 + 0x64;
    }
    *(int *)(obj + 4) = func_101DE0(func_1010A8(*(int *)(obj + 4), 6), 1);
    if (*(int *)(obj + 8) != 0)
        *(int *)(obj + 8) = func_102490(func_1010A8(*(int *)(obj + 8), 6));
    *(int *)(obj + 0xC) = func_101190(*(int *)(obj + 0xC), 6);
}
