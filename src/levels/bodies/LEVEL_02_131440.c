extern int func_130868(int handle, int mode);
extern int func_1315A0(int value, int mode);
extern int func_131C50(int value);
extern int func_130950(int handle, int mode);

void func_131440(char *obj)
{
    char *node = *(char **)(obj + 0x10);
    unsigned int i;

    for (i = 0; i < *(unsigned int *)(obj + 0x14); i++) {
        *(char **)(node + 0x40) = obj;
        node += *(unsigned char *)(node + 0x62) * 8 + 0x64;
    }
    *(int *)(obj + 4) = func_1315A0(func_130868(*(int *)(obj + 4), 6), 1);
    if (*(int *)(obj + 8) != 0)
        *(int *)(obj + 8) = func_131C50(func_130868(*(int *)(obj + 8), 6));
    *(int *)(obj + 0xC) = func_130950(*(int *)(obj + 0xC), 6);
}
