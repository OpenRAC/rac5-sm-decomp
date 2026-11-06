extern int func_120B10(int handle, int mode);
extern int func_121848(int value, int mode);
extern int func_121EF8(int value);
extern int func_120BF8(int handle, int mode);

void func_1216E8(char *obj)
{
    char *node = *(char **)(obj + 0x10);
    unsigned int i;

    for (i = 0; i < *(unsigned int *)(obj + 0x14); i++) {
        *(char **)(node + 0x40) = obj;
        node += *(unsigned char *)(node + 0x62) * 8 + 0x64;
    }
    *(int *)(obj + 4) = func_121848(func_120B10(*(int *)(obj + 4), 6), 1);
    if (*(int *)(obj + 8) != 0)
        *(int *)(obj + 8) = func_121EF8(func_120B10(*(int *)(obj + 8), 6));
    *(int *)(obj + 0xC) = func_120BF8(*(int *)(obj + 0xC), 6);
}
