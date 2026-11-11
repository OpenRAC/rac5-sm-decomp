extern char db_dlist[];
extern int D_0020B310;
extern int D_0020B314;
extern int D_0020B30C;
void func_092FD8(void)
{
    char *list = *(char **)(db_dlist + 0x54);
    int *slot = (int *)(list + 0x24);
    int delta = 0x28000;
    int value = *slot - delta;
    *slot = value;
    D_0020B30C = value;
    D_0020B310 = value;
    D_0020B314 = delta;
}