extern int func_105F98(int handle, int mode);
extern int func_106CE0(int value, int mode);
extern int func_107390(int value);
extern int func_106080(int handle, int mode);

void func_106B80(char *obj)
{
    char *node = *(char **)(obj + 0x10);
    unsigned int i;

    for (i = 0; i < *(unsigned int *)(obj + 0x14); i++) {
        *(char **)(node + 0x40) = obj;
        node += *(unsigned char *)(node + 0x62) * 8 + 0x64;
    }
    *(int *)(obj + 4) = func_106CE0(func_105F98(*(int *)(obj + 4), 6), 1);
    if (*(int *)(obj + 8) != 0)
        *(int *)(obj + 8) = func_107390(func_105F98(*(int *)(obj + 8), 6));
    *(int *)(obj + 0xC) = func_106080(*(int *)(obj + 0xC), 6);
}
