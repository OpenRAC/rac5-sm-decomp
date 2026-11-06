extern int func_11B330(int handle, int mode);
extern int func_11C068(int value, int mode);
extern int func_11C718(int value);
extern int func_11B418(int handle, int mode);

void func_11BF08(char *obj)
{
    char *node = *(char **)(obj + 0x10);
    unsigned int i;

    for (i = 0; i < *(unsigned int *)(obj + 0x14); i++) {
        *(char **)(node + 0x40) = obj;
        node += *(unsigned char *)(node + 0x62) * 8 + 0x64;
    }
    *(int *)(obj + 4) = func_11C068(func_11B330(*(int *)(obj + 4), 6), 1);
    if (*(int *)(obj + 8) != 0)
        *(int *)(obj + 8) = func_11C718(func_11B330(*(int *)(obj + 8), 6));
    *(int *)(obj + 0xC) = func_11B418(*(int *)(obj + 0xC), 6);
}
