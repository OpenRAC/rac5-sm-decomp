extern char *D_001E5C0C;
extern unsigned char D_001E5BF6;

int func_0ABB20(void)
{
    char *record = D_001E5C0C;
    unsigned int flags;
    unsigned int selected;
    if (record == 0)
        return 0;
    flags = *(unsigned int *)(record + 4);
    selected = flags & 1;
    D_001E5BF6 = (unsigned char)selected;
    if (*(unsigned int *)(record + 4) & 2)
        return *(int *)(record + (selected ? 0x14 : 0x10));
    return 0;
}
