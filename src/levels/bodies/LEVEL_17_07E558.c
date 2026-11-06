extern char db_dlist[];
extern int D_00197980;
extern int D_00197984;
extern int D_0019797C;
void func_07E558(void)
{
    char *list = *(char **)(db_dlist + 0x54);
    int *slot = (int *)(list + 0x24);
    int delta = 0x28000;
    int value = *slot - delta;
    *slot = value;
    D_0019797C = value;
    D_00197980 = value;
    D_00197984 = delta;
}