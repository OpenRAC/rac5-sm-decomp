extern void func_1C61B0(char *, int);

void func_1C5470(char *item)
{
    *(unsigned char *)(*(char **)(item + 0x58) + 0xc0) = 0;
    func_1C61B0(item, 0);
}
