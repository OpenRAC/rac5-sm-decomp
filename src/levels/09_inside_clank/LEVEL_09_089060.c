extern char db_dlist[];
extern int D_001E0150;
extern int D_001E0154;
extern int D_001E014C;
void func_089060(void)
{
    char *list = *(char **)(db_dlist + 0x54);
    int *slot = (int *)(list + 0x24);
    int delta = 0x28000;
    int value = *slot - delta;
    *slot = value;
    D_001E014C = value;
    D_001E0150 = value;
    D_001E0154 = delta;
}