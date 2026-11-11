extern char db_dlist[];
extern int D_001F6350;
extern int D_001F6354;
extern int D_001F634C;
void func_08C908(void)
{
    char *list = *(char **)(db_dlist + 0x54);
    int *slot = (int *)(list + 0x24);
    int delta = 0x28000;
    int value = *slot - delta;
    *slot = value;
    D_001F634C = value;
    D_001F6350 = value;
    D_001F6354 = delta;
}