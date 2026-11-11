extern int func_128720(int handle, int mode);
extern int func_129458(int value, int mode);
extern int func_129B08(int value);
extern int func_128808(int handle, int mode);

void func_1292F8(char *obj, char *ctx)
{
    char *node = *(char **)(obj + 0x10);
    unsigned int i;

    for (i = 0; i < *(unsigned int *)(obj + 0x14); i++) {
        *(char **)(node + 0x40) = obj;
        node += *(unsigned char *)(node + 0x62) * 8 + 0x64;
    }
    *(int *)(obj + 4) = func_129458(func_128720(*(int *)(obj + 4), 6), 1);
    if (*(int *)(obj + 8) != 0)
        *(int *)(obj + 8) = func_129B08(func_128720(*(int *)(obj + 8), 6));
    *(int *)(obj + 0xC) = func_128808(*(int *)(obj + 0xC), 6);
}
