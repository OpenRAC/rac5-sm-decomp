/* LEVEL_01:0x0AE870 -- placement copy of LEVEL_02_0B5180.c. */
extern char *D_001FBE0C;
extern unsigned char D_001FBDF6;

int func_0AE870(void)
{
    char *record = D_001FBE0C;
    unsigned int flags;
    unsigned int selected;
    if (record == 0)
        return 0;
    flags = *(unsigned int *)(record + 4);
    selected = flags & 1;
    D_001FBDF6 = (unsigned char)selected;
    if (*(unsigned int *)(record + 4) & 2)
        return *(int *)(record + (selected ? 0x14 : 0x10));
    return 0;
}
