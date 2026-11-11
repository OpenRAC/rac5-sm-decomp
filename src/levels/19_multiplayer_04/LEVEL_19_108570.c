extern int func_107988(int handle, int mode);
extern int func_1086D0(int value, int mode);
extern int func_108D80(int value);
extern int func_107A70(int handle, int mode);

void func_108570(char *obj, char *ctx)
{
    char *node = *(char **)(obj + 0x10);
    unsigned int i;

    for (i = 0; i < *(unsigned int *)(obj + 0x14); i++) {
        *(char **)(node + 0x40) = obj;
        node += *(unsigned char *)(node + 0x62) * 8 + 0x64;
    }
    *(int *)(obj + 4) = func_1086D0(func_107988(*(int *)(obj + 4), 6), 1);
    if (*(int *)(obj + 8) != 0)
        *(int *)(obj + 8) = func_108D80(func_107988(*(int *)(obj + 8), 6));
    *(int *)(obj + 0xC) = func_107A70(*(int *)(obj + 0xC), 6);
}
