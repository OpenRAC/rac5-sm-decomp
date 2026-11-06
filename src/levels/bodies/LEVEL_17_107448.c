extern int func_106860(int handle, int mode);
extern int func_1075A8(int value, int mode);
extern int func_107C58(int value);
extern int func_106948(int handle, int mode);

void func_107448(char *obj)
{
    char *node = *(char **)(obj + 0x10);
    unsigned int i;

    for (i = 0; i < *(unsigned int *)(obj + 0x14); i++) {
        *(char **)(node + 0x40) = obj;
        node += *(unsigned char *)(node + 0x62) * 8 + 0x64;
    }
    *(int *)(obj + 4) = func_1075A8(func_106860(*(int *)(obj + 4), 6), 1);
    if (*(int *)(obj + 8) != 0)
        *(int *)(obj + 8) = func_107C58(func_106860(*(int *)(obj + 8), 6));
    *(int *)(obj + 0xC) = func_106948(*(int *)(obj + 0xC), 6);
}
