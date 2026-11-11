extern int func_12A4B8(int handle, int mode);
extern int func_12B1F0(int value, int mode);
extern int func_12B8A0(int value);
extern int func_12A5A0(int handle, int mode);

void func_12B090(char *obj, char *ctx)
{
    char *node = *(char **)(obj + 0x10);
    unsigned int i;

    for (i = 0; i < *(unsigned int *)(obj + 0x14); i++) {
        *(char **)(node + 0x40) = obj;
        node += *(unsigned char *)(node + 0x62) * 8 + 0x64;
    }
    *(int *)(obj + 4) = func_12B1F0(func_12A4B8(*(int *)(obj + 4), 6), 1);
    if (*(int *)(obj + 8) != 0)
        *(int *)(obj + 8) = func_12B8A0(func_12A4B8(*(int *)(obj + 8), 6));
    *(int *)(obj + 0xC) = func_12A5A0(*(int *)(obj + 0xC), 6);
}
