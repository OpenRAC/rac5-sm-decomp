extern char db_dlist[];
extern int D_001C6FD0;
extern int D_001C6FD4;
extern int D_001C6FCC;
void func_085948(void)
{
    char *list = *(char **)(db_dlist + 0x54);
    int *slot = (int *)(list + 0x24);
    int delta = 0x28000;
    int value = *slot - delta;
    *slot = value;
    D_001C6FCC = value;
    D_001C6FD0 = value;
    D_001C6FD4 = delta;
}