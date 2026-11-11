extern char db_dlist[];
extern int D_001E5250;
extern int D_001E5254;
extern int D_001E524C;
void func_085558(void)
{
    char *list = *(char **)(db_dlist + 0x54);
    int *slot = (int *)(list + 0x24);
    int delta = 0x28000;
    int value = *slot - delta;
    *slot = value;
    D_001E524C = value;
    D_001E5250 = value;
    D_001E5254 = delta;
}