extern void func_1EF330(char *, int);

void func_1EE5F0(char *item)
{
    *(unsigned char *)(*(char **)(item + 0x58) + 0xc0) = 0;
    func_1EF330(item, 0);
}
