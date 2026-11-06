extern char db_dlist[];
extern int D_0020F810;
extern int D_0020F814;
extern int D_0020F80C;
void func_08FA00(void)
{
    char *list = *(char **)(db_dlist + 0x54);
    int *slot = (int *)(list + 0x24);
    int delta = 0x28000;
    int value = *slot - delta;
    *slot = value;
    D_0020F80C = value;
    D_0020F810 = value;
    D_0020F814 = delta;
}