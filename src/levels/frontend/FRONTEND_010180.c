/* FRONTEND:0x010180 -- placement copy of LEVEL_01_0AE870.c: placement copy of LEVEL_02_0B5180.c. */
extern char *D_0002FE1C;
extern unsigned char D_0002FE01;

int func_010180(void)
{
    char *record = D_0002FE1C;
    unsigned int flags;
    unsigned int selected;
    if (record == 0)
        return 0;
    flags = *(unsigned int *)(record + 4);
    selected = flags & 1;
    D_0002FE01 = (unsigned char)selected;
    if (*(unsigned int *)(record + 4) & 2)
        return *(int *)(record + (selected ? 0x14 : 0x10));
    return 0;
}
