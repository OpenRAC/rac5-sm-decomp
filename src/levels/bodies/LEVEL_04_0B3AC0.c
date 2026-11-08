extern char *D_002152CC;
extern unsigned char D_002152B6;

int func_0B3AC0(void)
{
    char *record = D_002152CC;
    unsigned int flags;
    unsigned int selected;
    if (record == 0)
        return 0;
    flags = *(unsigned int *)(record + 4);
    selected = flags & 1;
    D_002152B6 = (unsigned char)selected;
    if (*(unsigned int *)(record + 4) & 2)
        return *(int *)(record + (selected ? 0x14 : 0x10));
    return 0;
}
