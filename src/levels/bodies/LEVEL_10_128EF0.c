extern int func_128318(int handle, int mode);
extern int func_129050(int value, int mode);
extern int func_129700(int value);
extern int func_128400(int handle, int mode);

void func_128EF0(char *obj, char *ctx)
{
    char *node = *(char **)(obj + 0x10);
    unsigned int i;

    for (i = 0; i < *(unsigned int *)(obj + 0x14); i++) {
        *(char **)(node + 0x40) = obj;
        node += *(unsigned char *)(node + 0x62) * 8 + 0x64;
    }
    *(int *)(obj + 4) = func_129050(func_128318(*(int *)(obj + 4), 6), 1);
    if (*(int *)(obj + 8) != 0)
        *(int *)(obj + 8) = func_129700(func_128318(*(int *)(obj + 8), 6));
    *(int *)(obj + 0xC) = func_128400(*(int *)(obj + 0xC), 6);
}
