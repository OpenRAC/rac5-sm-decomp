extern char *D_001CF20C;
extern unsigned char D_001CF1F6;

int func_0A55E0(void)
{
    char *record = D_001CF20C;
    unsigned int flags;
    unsigned int selected;
    if (record == 0)
        return 0;
    flags = *(unsigned int *)(record + 4);
    selected = flags & 1;
    D_001CF1F6 = (unsigned char)selected;
    if (*(unsigned int *)(record + 4) & 2)
        return *(int *)(record + (selected ? 0x14 : 0x10));
    return 0;
}
