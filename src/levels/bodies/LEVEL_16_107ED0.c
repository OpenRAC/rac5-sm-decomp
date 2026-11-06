extern int func_1072E8(int handle, int mode);
extern int func_108030(int value, int mode);
extern int func_1086E0(int value);
extern int func_1073D0(int handle, int mode);

void func_107ED0(char *obj)
{
    char *node = *(char **)(obj + 0x10);
    unsigned int i;

    for (i = 0; i < *(unsigned int *)(obj + 0x14); i++) {
        *(char **)(node + 0x40) = obj;
        node += *(unsigned char *)(node + 0x62) * 8 + 0x64;
    }
    *(int *)(obj + 4) = func_108030(func_1072E8(*(int *)(obj + 4), 6), 1);
    if (*(int *)(obj + 8) != 0)
        *(int *)(obj + 8) = func_1086E0(func_1072E8(*(int *)(obj + 8), 6));
    *(int *)(obj + 0xC) = func_1073D0(*(int *)(obj + 0xC), 6);
}
