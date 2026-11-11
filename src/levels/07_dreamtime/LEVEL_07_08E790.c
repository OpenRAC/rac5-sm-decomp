extern char db_dlist[];
extern int D_0020A650;
extern int D_0020A654;
extern int D_0020A64C;
void func_08E790(void)
{
    char *list = *(char **)(db_dlist + 0x54);
    int *slot = (int *)(list + 0x24);
    int delta = 0x28000;
    int value = *slot - delta;
    *slot = value;
    D_0020A64C = value;
    D_0020A650 = value;
    D_0020A654 = delta;
}