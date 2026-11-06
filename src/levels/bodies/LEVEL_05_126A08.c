extern int func_125E30(int handle, int mode);
extern int func_126B68(int value, int mode);
extern int func_127218(int value);
extern int func_125F18(int handle, int mode);

void func_126A08(char *obj)
{
    char *node = *(char **)(obj + 0x10);
    unsigned int i;

    for (i = 0; i < *(unsigned int *)(obj + 0x14); i++) {
        *(char **)(node + 0x40) = obj;
        node += *(unsigned char *)(node + 0x62) * 8 + 0x64;
    }
    *(int *)(obj + 4) = func_126B68(func_125E30(*(int *)(obj + 4), 6), 1);
    if (*(int *)(obj + 8) != 0)
        *(int *)(obj + 8) = func_127218(func_125E30(*(int *)(obj + 8), 6));
    *(int *)(obj + 0xC) = func_125F18(*(int *)(obj + 0xC), 6);
}
