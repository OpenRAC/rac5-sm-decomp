extern char *D_001A9DCC;
extern unsigned char D_001A9DB6;

int func_09CF60(void)
{
    char *record = D_001A9DCC;
    unsigned int flags;
    unsigned int selected;
    if (record == 0)
        return 0;
    flags = *(unsigned int *)(record + 4);
    selected = flags & 1;
    D_001A9DB6 = (unsigned char)selected;
    if (*(unsigned int *)(record + 4) & 2)
        return *(int *)(record + (selected ? 0x14 : 0x10));
    return 0;
}
