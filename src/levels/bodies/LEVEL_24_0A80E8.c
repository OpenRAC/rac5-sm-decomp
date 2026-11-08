extern char *D_001CCA8C;
extern unsigned char D_001CCA76;

int func_0A80E8(void)
{
    char *record = D_001CCA8C;
    unsigned int flags;
    unsigned int selected;
    if (record == 0)
        return 0;
    flags = *(unsigned int *)(record + 4);
    selected = flags & 1;
    D_001CCA76 = (unsigned char)selected;
    if (*(unsigned int *)(record + 4) & 2)
        return *(int *)(record + (selected ? 0x14 : 0x10));
    return 0;
}
