extern char db_dlist[];
extern int D_00106A60;
extern int D_00106A64;
extern int D_00106A5C;
void LIGHT_BeginFrame__Fv(void)
{
    char *list = *(char **)(db_dlist + 0x54);
    int *slot = (int *)(list + 0x24);
    int delta = 0x28000;
    int value = *slot - delta;
    *slot = value;
    D_00106A5C = value;
    D_00106A60 = value;
    D_00106A64 = delta;
}