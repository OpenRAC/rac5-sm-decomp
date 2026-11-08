extern char *D_0015B18C;
extern unsigned char D_0015B176;

int func_09CE80(void)
{
    char *record = D_0015B18C;
    unsigned int flags;
    unsigned int selected;
    if (record == 0)
        return 0;
    flags = *(unsigned int *)(record + 4);
    selected = flags & 1;
    D_0015B176 = (unsigned char)selected;
    if (*(unsigned int *)(record + 4) & 2)
        return *(int *)(record + (selected ? 0x14 : 0x10));
    return 0;
}
