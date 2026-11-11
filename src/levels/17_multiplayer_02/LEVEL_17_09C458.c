extern char *D_0019D3CC;
extern unsigned char D_0019D3B6;

int func_09C458(void)
{
    char *record = D_0019D3CC;
    unsigned int flags;
    unsigned int selected;
    if (record == 0)
        return 0;
    flags = *(unsigned int *)(record + 4);
    selected = flags & 1;
    D_0019D3B6 = (unsigned char)selected;
    if (*(unsigned int *)(record + 4) & 2)
        return *(int *)(record + (selected ? 0x14 : 0x10));
    return 0;
}
