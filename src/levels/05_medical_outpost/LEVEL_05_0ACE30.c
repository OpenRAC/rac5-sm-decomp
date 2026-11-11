extern char *D_001EB18C;
extern unsigned char D_001EB176;

int func_0ACE30(void)
{
    char *record = D_001EB18C;
    unsigned int flags;
    unsigned int selected;
    if (record == 0)
        return 0;
    flags = *(unsigned int *)(record + 4);
    selected = flags & 1;
    D_001EB176 = (unsigned char)selected;
    if (*(unsigned int *)(record + 4) & 2)
        return *(int *)(record + (selected ? 0x14 : 0x10));
    return 0;
}
