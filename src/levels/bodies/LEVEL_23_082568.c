extern char db_dlist[];
extern int D_001C9750;
extern int D_001C9754;
extern int D_001C974C;
void func_082568(void)
{
    char *list = *(char **)(db_dlist + 0x54);
    int *slot = (int *)(list + 0x24);
    int delta = 0x28000;
    int value = *slot - delta;
    *slot = value;
    D_001C974C = value;
    D_001C9750 = value;
    D_001C9754 = delta;
}