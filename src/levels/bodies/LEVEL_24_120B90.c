extern int func_11FFB8(int handle, int mode);
extern int func_120CF0(int value, int mode);
extern int func_1213A0(int value);
extern int func_1200A0(int handle, int mode);

void func_120B90(char *obj)
{
    char *node = *(char **)(obj + 0x10);
    unsigned int i;

    for (i = 0; i < *(unsigned int *)(obj + 0x14); i++) {
        *(char **)(node + 0x40) = obj;
        node += *(unsigned char *)(node + 0x62) * 8 + 0x64;
    }
    *(int *)(obj + 4) = func_120CF0(func_11FFB8(*(int *)(obj + 4), 6), 1);
    if (*(int *)(obj + 8) != 0)
        *(int *)(obj + 8) = func_1213A0(func_11FFB8(*(int *)(obj + 8), 6));
    *(int *)(obj + 0xC) = func_1200A0(*(int *)(obj + 0xC), 6);
}
